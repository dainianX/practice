#include <iostream>
using namespace std;
class CSample {
    int x;
public:
    CSample() { cout<<"C1"<<endl;}
    CSample(int n ) {x = n;cout<<"C2,x="<<x<<endl;}
};
int main()
{
    CSample array1[2];
    CSample array2[2] = {6,8};
    CSample array3[2] = {12};
    return 0;
}