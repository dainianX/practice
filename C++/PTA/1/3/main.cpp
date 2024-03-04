#include <iostream>
using namespace std;

int* bubble_sort(int n);/* 对长度为n的数组执行冒泡排序 */

int main()
{
    int n;
    cin >> n;
    int* a = bubble_sort(n);
    for (int i = 0; i < n; i++) {
        cout << a[i];
        if (i < n - 1)cout << " ";
    }
    cout << endl;
    delete []a;
    return 0;
}

/* 你的代码将嵌在这里 */
int* bubble_sort(int n) {
    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);
    }

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }

    return arr;

}