#include <bits/stdc++.h>
#include <cstdio>
#include <string>
using namespace std;

class NSX {
  string maNSX;
  string tenNSX;
  string dcNSX;

public:
  friend class HANG;
};

class HANG {
  string maHang;
  string tenHang;
  long donGia;
  double trongLuong;
  NSX x;

public:
  void nhap();
  void xuat();
};

void HANG::nhap() {
  cout << "Nhap ma hang: ";
  fflush(stdin);
  getline(cin, maHang);
  cout << "Nhap ten hang: ";
  fflush(stdin);
  getline(cin, tenHang);
  cout << "Nhap don gia: ";
  cin >> donGia;
  cout << "Nhap trong luong: ";
  cin >> trongLuong;

  cin.ignore();
  cout << "Nhap ma nsx: ";
  fflush(stdin);
  getline(cin, x.maNSX);
  cout << "Nhap ten nsx: ";
  fflush(stdin);
  getline(cin, x.tenNSX);
  cout << "Nhap dia chi nsx: ";
  fflush(stdin);
  getline(cin, x.dcNSX);
}
void HANG::xuat() {
  cout << setw(15) << "ma hang";
  cout << setw(15) << "ten hang";
  cout << setw(15) << "don gia";
  cout << setw(15) << "trong luong";
  cout << setw(15) << "ma nsx";
  cout << setw(15) << "ten nsx";
  cout << setw(15) << "dia chi nsx" << endl;

  cout << setw(15) << maHang;
  cout << setw(15) << tenHang;
  cout << setw(15) << donGia;
  cout << setw(15) << trongLuong;
  cout << setw(15) << x.maNSX;
  cout << setw(15) << x.tenNSX;
  cout << setw(15) << x.dcNSX << endl;
}
int main() {
  HANG a;
  a.nhap();
  a.xuat();
  return 0;
}
