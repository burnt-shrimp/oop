#include <iostream>
#include <string>
using namespace std;
class Date {
  int d, m, y;

public:
  void nhap();
  void xuat();
};

void Date::nhap() {
  cout << "Nhap ngay sinh: ";
  cin >> d >> m >> y;
}

void Date::xuat() {
  cout << "Ngay sinh: " << d << "/" << m << "/" << y << endl;
}

class NhanSu {
  string MaNS;
  string TenNS;
  Date ngaySinh;

public:
  void nhap();
  void xuat();
};

void NhanSu::nhap() {
  cout << "Nhap ma nhan su: ";
  fflush(stdin);
  getline(cin, MaNS);
  cout << "Nhap ten nhan su: ";
  fflush(stdin);
  getline(cin, TenNS);
  ngaySinh.nhap();
}

void NhanSu::xuat() {
  cout << "Xuat ma nhan su: " << MaNS << endl;
  cout << "Ten nhan su: " << TenNS << endl;
  ngaySinh.xuat();
}

int main() {
  NhanSu ns1;
  ns1.nhap();
  ns1.xuat();

  return 0;
}
