//
// Created by Administrator on 2024-03-02.
//
#include<iostream>
using namespace std;
float temp;
float area1(float r) {
    temp = r * r;
    return temp;// 返回temp的值，右值
}

float& area2(float r) {
    temp = r * r;
    return temp; //返回temp本身，左值
}

void print(int x = 3) {

}
void print(char* s1="hello", char* s2) {

}
int main() {
    float a1 = area1(5.0);
    float& a2 = area1(5.0);
    float& a3 = area2(5.0);
    float a4 = area1(4) = 10;
    float a5 = area2(4) = 20;
    char *pstr {"c++"};
    const char* str1{"Java"};;
    char str2[]{"python"};
    const char *const ps{str2};
    str2[4] = 'e';
    ps = str2;
    ps[1] = 'o';
    pstr = str1; //
    str1[1] = '0';
    pstr[1]= pstr[2] = 'p';
    print(5);
    print();
    print("world");

}