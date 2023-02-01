#include <iostream>
using namespace std;

class Hinh {
protected:
  int dai, rong;

public:
  void nhap() {
    cout << "Nhap chieu dai: ";
    cin >> dai;
    cout << "Nhap chieu rong: ";
    cin >> rong;
  }
  void xuat() {
    cout << "chieu dai: " << dai << endl;
    cout << "chieu rong: " << rong << endl;
  }
};

class HCN : public Hinh {
public:
  double chuVi() { return (dai + rong) * 2; }
  double dienTich() { return dai * rong; }
};
int main() {
  HCN h1;
  h1.nhap();
  h1.xuat();
  cout << "chu vi hcn la: " << h1.chuVi() << endl;
  cout << "dien tich hcn la: " << h1.dienTich() << endl;

  return 0;
}
