#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <fstream>

using namespace std;

typedef struct {
    int weight;       // 结点权值
    int parent, left, right;  // 父节点、左孩子、右孩子在数组中的下标
    char node;        // 结点存储的字符
} HTNode, *HuffmanTree;


char node[10];

typedef char **HuffmanCode;  // 存储Huffman编码的数组

// 选择两个权值最小的结点
void Select(HuffmanTree HT, int n, int &s1, int &s2) {
    int i = 1;
    int min1 = 10000, min2 = 10000; // 存储权值最小的结点
    s1 = s2 = 0;

    while (i <= n) {
        if (HT[i].parent == 0) {
            if (min1 > HT[i].weight) {
                min2 = min1;
                s2 = s1;
                min1 = HT[i].weight;
                s1 = i;
            } else if (min2 > HT[i].weight) {
                s2 = i;
                min2 = HT[i].weight;
            }
        }
        i++;
    }
}

// 创建Huffman树
void CreateHuffman(HuffmanTree &HT, int *w, int n) {
    int i, s1, s2;
    int m = 2 * n - 1;

    if (n <= 1)
        return;

    HT = (HuffmanTree)malloc((m + 1) * sizeof(HTNode));

    for (i = 0; i <= n; i++, ++w) {
        HT[i].weight = *w;
        HT[i].node = node[i];
        HT[i].left = 0;
        HT[i].parent = 0;
        HT[i].right = 0;
    }

    for (; i <= m; ++i) { // i = n + 1
        HT[i].weight = 0;
        HT[i].left = 0;
        HT[i].parent = 0;
        HT[i].right = 0;
    }

    for (i = n + 1; i <= m; ++i) {
        s1 = s2 = 0;
        Select(HT, i - 1, s1, s2);
        HT[s1].parent = i;
        HT[s2].parent = i;
        HT[i].left = s1;
        HT[i].right = s2;
        HT[i].weight = HT[s1].weight + HT[s2].weight;
    }
}

// 进行Huffman编码
void HuffmanEncode(HuffmanTree HT, HuffmanCode &HC, int n) {
    int i;
    HC = (HuffmanCode)malloc((n + 1) * sizeof(char *)); // n个编码的头指针向量
    char *code = (char *)malloc(n * sizeof(char));
    code[n - 1] = '\0';

    for (i = 1; i <= n; ++i) {
        int start = n - 1;
        for (int c = i, f = HT[i].parent; f != 0; c = f, f = HT[f].parent) {
            if (HT[f].left == c) {
                code[--start] = '0';
            } else {
                code[--start] = '1';
            }
        }
        HC[i] = (char *)malloc((n - start) * sizeof(char));
        strcpy(HC[i], &code[start]);
    }

    for (i = 1; i <= n; i++) {
        printf("%c %d的编码为: %s\n", node[i], HT[i].weight, HC[i]);
    }

    FILE *fp;
    fp = fopen("hfmTree.txt", "w+");

    for (i = 1; i <= n; i++) {
        fprintf(fp, "%c %s ", node[i], HC[i]);
    }
    fclose(fp);

    free(code);
}

// 对输入文件进行Huffman编码
void Encode() {
    char a[100][30], b[100][30];
    char letter[30];
    int i = 1, j = 1, n, k, t = 1;
    ifstream infile;
    infile.open("hfmTree.txt");

    while (infile >> letter) {
        if (t % 2 == 1) {
            strcpy(a[i], letter);
            i++;
        }
        if (t % 2 == 0) {
            strcpy(b[j], letter);
            j++;
        }
        t++;
    }

    a[i - 1][30] = ' ';
    b[j][30] = '1';
    n = j - 1;

    string tobe;
    ifstream fp;
    fp.open("ToBeTran.txt");

    while (fp >> letter) {
        tobe = tobe + ' ' + letter;
    }

    FILE *fw;
    fw = fopen("CodeFile.txt", "w+");

    for (j = 1; tobe[j] != '\0'; j++) {
        for (k = 0; k <= n + 1; k++) {
            if (a[k][30] == tobe[j]) {
                fprintf(fw, "%s", b[k + 1]);
                break;
            }
        }
    }

    fclose(fw);
}

// 对编码文件进行解码
void Decode() {
    char a[100][30], b[100][30];
    char letter[30];
    int i = 1, j = 1, n, k, t = 1;
    ifstream infile;
    infile.open("hfmTree.txt");

    while (infile
            >> letter) {
        if (t % 2 == 1) {
            strcpy(a[i], letter);
            i++;
        }
        if (t % 2 == 0) {
            strcpy(b[j], letter);
            j++;
        }
        t++;
    }

    a[i - 2][30] = ' ';
    b[j - 1][30] = '1';
    n = j;

    char c[100][30];
    i = 1;
    int x;
    ifstream fpp;
    fpp.open("1.txt");

    while (fpp >> letter) {
        strcpy(c[i], letter);
        i++;
    }
    x = i - 1;

    FILE *fw;
    fw = fopen("Textfile.txt", "w+");
    for (i = 1; i <= x; i++) {
        if ((strcmp("1", c[i])) == 0) {
            fprintf(fw, " ");
        }
        for (k = 1; k <= n - 1; k++) {
            if ((strcmp(b[k], c[i])) == 0) {
                fprintf(fw, "%s", a[k]);
                break;
            }
        }
    }
    fclose(fw);
}

// 打印编码结果
void print() {
    char letter[1000];
    int i;
    ifstream faa;
    faa.open("CodeFile.txt");
    faa >> letter;
    FILE *fw;
    fw = fopen("CodePrin.txt", "w+");
    for (i = 0; letter[i] != '\0'; i++) {
        printf("%c", letter[i]);
        fprintf(fw, "%c", letter[i]);
        if ((i + 1) % 50 == 0) {
            printf("\n");
            fprintf(fw, "\n");
        }
    }
    fclose(fw);
    printf("\n");
}

int main() {
    system("chcp 65001");
    HuffmanTree HT;
    HuffmanCode HC;
    int i, n, choose;
    int w[100];

    while (1) {
        printf("请选择需要进行的操作:\n");
        printf("1.初始化\n");
        printf("2.对ToBeTran中的正文进行编码\n");
        printf("3.对CodeFile中的代码进行译码\n");
        printf("4.打印代码文件\n");
        printf("5.退出\n");
        scanf("%d", &choose);

        if (choose == 1) {
            printf("请输入字符的个数:\n");
            scanf("%d", &n);
            printf("请输入%d个字符所对应的名称和权值:\n", n);
            w[0] = 0;
            for (i = 1; i <= n; i++) {
                getchar();
                scanf("%c%d", &node[i], &w[i]);
            }
            CreateHuffman(HT, w, n);
            HuffmanEncode(HT, HC, n);
            printf("此赫夫曼树结果已存于hfmTree文件中\n\n");
            getchar();
        }

        if (choose == 2) {
            Encode();
            printf("编码成功，结果已存入文件CodeFile。\n\n");
        }

        if (choose == 3) {
            Decode();
            printf("译码成功，结果已存入文件Textfile。\n\n");
        }

        if (choose == 4) {
            printf("代码输出结果为:\n");
            print();
            printf("\n");
        }

        if (choose == 5) {
            printf("退出成功\n");
            exit(0);
        }
    }
}
