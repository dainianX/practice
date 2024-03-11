#include<stdio.h>

int main() {
    //定义十个数
    int number[10];
    //输入十个数的值
    for (int i = 0; i < 10; i++) {
        scanf("%d", &number[i]);
    }
    //求十个数的和
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum = sum + number[i];
    }
    //求平均值
    double avg;
    avg = (double)sum / 10;
    //输出
    printf("ave=%.1f\n", avg);

    return 0;
}
