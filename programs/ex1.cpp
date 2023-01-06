#include <iostream>
#include <cmath>
using namespace std;

class Diem {
  private:
    int x; 
    int y;
  public:
    void nhap();
    friend class DoanThang; 
};

void Diem::nhap(){
  cout << "nhap x: "; cin >> x;
  cout << "nhap y: "; cin >> y;
}

class DoanThang {
  private:
    Diem a;
    Diem b;
  public:
    void nhap();
    double doDai();
};

void DoanThang::nhap() {
  cout << "nhap diem a: "; a.nhap();
  cout << "nhap diem b: "; b.nhap();
}

double DoanThang::doDai(){
  return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}

int main(){
  DoanThang dt1;
  dt1.nhap();
  cout << dt1.doDai();

  return 0;
}
