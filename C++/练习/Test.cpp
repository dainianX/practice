//
// Created by Administrator on 2024-03-02.
//
#include<iostream>
using namespace std;

int main() {
    int x = 1;
    int * const px = &x;
    px = nullptr;
    cout << x;
}