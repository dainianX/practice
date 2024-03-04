#include<iostream>
using std::cin;
using std::cout;
using std::endl;

void input(char* c1, char* c2, int* i);

int main()
{
   char ch1, ch2;
   int i;
   input(&ch1, &ch2, &i);
   cout << ch1 << endl << ch2 << endl <<  i << endl;
   return 0;
}

/* 请在这里填写答案 */
void input(char* c1, char* c2, int* i) {
    cin.get(*c1);
    cin.get(*c2);
    cin >> *i;
}