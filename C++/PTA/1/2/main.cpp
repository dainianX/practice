#include<iostream>
void input(char* s);
int main() {
   char str[20];
   input(str);
   std::cout << str << std::endl;
   system("pause");
   return 0;
 }

/* 请在这里填写答案 */
void input(char* s) {
    std::cin.getline(s, 20, '#');
}