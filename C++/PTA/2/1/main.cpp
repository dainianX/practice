#include<iostream>
#include<string>
using namespace std;
int area(int x, int y);
int area(int x, int y, int z);

int main()
{
    int i, repeat, c, x, y, z;
    cin>>repeat;
    for(i=0;i<repeat;i++){
        cin>>c;
        if(c==2){
            cin>>x>>y;
            cout<<area(x,y)<<endl;
        }
        if(c==3){
            cin>>x>>y>>z;
            cout<<area(x,y,z)<<endl;
        }
    }
    return 0;
}

/* 请在这里填写答案 */
int area(int x, int y) {
    return x * y;
}

int area(int x, int y, int z) {
    return (x * y + y * z + x * z) * 2;
}