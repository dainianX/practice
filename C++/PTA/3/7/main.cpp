#include<iostream>
using namespace std;
class A
{
public:
    A(int i){a=i;}
    void print()
    {    cout<<"a="<<a<<endl;
        cout<<"this->a="<<this->a<<endl;
    }
private:
    int a;
};
int main()
{
    A x(55);
    x.print();
    return 0;
}