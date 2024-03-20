#include <iostream>
using namespace std;
class C{
private:
 int x;
 double y;
public:
 C(){x=0;y=0;}
 void ask(int);
 void ask(double);
 void ask(int,double);
 void ask();
};
void C::ask(int a){x=a;}
void C::ask(double b){y=b;}
void C::ask(int a,double b){x=a;y=b;}
void C::ask(){cout<<"x="<<x<<",y="<<y<<endl;}
int main()
{
C c;
c.ask();
c.ask(6,8.2);
c.ask();
c.ask(3);
c.ask();
c.ask(9.2);
c.ask();
}