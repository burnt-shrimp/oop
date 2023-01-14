#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class PS{
    int tuso;
    int mauso;
    public:
        PS() : tuso{0}, mauso{1}{};
        PS(int ts, int ms) : tuso{ts}, mauso{ms}{};
        void xuat(){
            cout << tuso << "/"<< mauso << endl;
        }
};
int main(){
    PS p1, p2(2, 3);
    cout << "phan so 1: "; p1.xuat();
    cout << "phan so 2: "; p2.xuat();
    return 0;
}
