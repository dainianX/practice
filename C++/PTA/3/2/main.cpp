#include <iostream>
using namespace std;

enum CPU_Rank{P1=1,P2,P3,P4,P5,P6,P7};

class CPU{
private:
    CPU_Rank rank;
    int frequency;
    double voltage;
public:
    CPU() {
        cout << "create a CPU!" << endl;
        rank = P1;
        frequency = 2;
        voltage = 100;
    }
    CPU(CPU_Rank r, int f, double v) {
        cout << "create a CPU!" << endl;
        rank = r;
        frequency = f;
        voltage = v;
    }
    CPU(const CPU &other) {
        cout << "copy create a CPU!" << endl;
        rank = other.rank;
        frequency = other.rank;
        voltage = other.voltage;
    }

    ~CPU() {
        cout << "destruct a CPU!" << endl;
    }

    void showinfo() {
        cout << "rank:" << rank << endl;
        cout << "frequency:" << frequency << endl;
        cout << "voltage:" << voltage << endl;
    }
};
int main()
{
    CPU a(P6,3,300);

    cout<<"cpu a's parameter"<<endl;
    a.showinfo(); //显示性能参数

    CPU b;
    cout<<"cpu b's parameter"<<endl;
    b.showinfo(); //显示性能参数

    CPU c(a);
    cout<<"cpu c's parameter"<<endl;
    c.showinfo(); //显示性能参数
}

