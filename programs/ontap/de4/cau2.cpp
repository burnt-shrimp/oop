#include <bits/stdc++.h>
using namespace std;

class DT{
    double x1, y1, x2, y2;
    public:
        friend istream &operator>>(istream &in, DT &a);
        friend ostream &operator<<(ostream &out, DT &a);
        DT();
        DT(double x1, double y1, double x2, double y2);
        bool operator+(DT a);
        bool operator!();

};

istream &operator>>(istream &in, DT &a){
    cout << "\nnhap x1 = "; in >> a.x1;
    cout << "\nnhap y1 = "; in >> a.y1;
    cout << "\nnhap x2 = "; in >> a.x2;
    cout << "\nnhap y2 = "; in >> a.y2;
    return in;
}
ostream &operator<<(ostream &out, DT &a){
    cout << "Diem A(" << a.x1 << "," << a.y1 << ")" << endl;
    cout << "Diem B(" << a.x2 << "," << a.y2 << ")" << endl;
    return out;
}

DT::DT(){
    x1=y1=x2=y2=0;
}
DT::DT(double x1, double y1, double x2, double y2){
    this->x1 = x1;
    this->y1 = y1;
    this->x2 = x2;
    this->y2 = y2;
}

bool DT::operator+(DT a){
    if(x1==a.x1 &&y1==a.y1 && x2==a.x2 && y2==a.y2){
        return true;
    }
    return false;
}

bool DT::operator!(){
    if(x1==x2 &&y1 == y2){
        return true;
    }
    return false;
}
int main(){
    DT dt1, dt2;
    cout << "duong thang 1: "; cin >> dt1;
    cout << "duong thang 2: "; cin >> dt2;
    cout << "==================" << endl;
    cout << "duong thang 1: " << dt1 << endl;
    cout << "duong thang 2: " << dt2 << endl;
    if(dt1+dt2){
        cout << "true" << endl;
    }else {
        cout << "false" << endl;
    }
    cout << "=====================" << endl;
    cout << "duong thang AB: " << endl;
    if(!dt2){
        cout << "true" << endl;
    }else {
        cout << "false" << endl;
    }
    return 0;
}
