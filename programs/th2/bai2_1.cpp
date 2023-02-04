#include <bits/stdc++.h>
#include <cstdio>
#include <string>
using namespace std;

class DATE {
  int d, m, y;

public:
  void nhap();
  void xuat();
};

void DATE::nhap() {
  cout << "Nhap ngay: ";
  cin >> d >> m >> y;
}
void DATE::xuat() { cout << d << "/" << m << "/" << y; }

class NHANSU {
  string MaNS;
  string Hoten;
  DATE NS;

public:
  void nhap();
  void xuat();
};

void NHANSU::nhap() {
  cout << "Nhap ma ns: ";
  fflush(stdin);
  getline(cin, MaNS);
  cout << "Nhap ten ns: ";
  fflush(stdin);
  getline(cin, Hoten);
  NS.nhap();
}
void NHANSU::xuat() {
  cout << setw(10) << MaNS << setw(15) << Hoten << setw(15);
  NS.xuat();
}

int main() {
  NHANSU x;
  x.nhap();
  cout << setw(10) << "Ma nhan su" << setw(15) << "Hoten" << setw(15)
       << "Ngaysinh" << endl;
  x.xuat();
  return 0;
}
