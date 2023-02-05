#include <bits/stdc++.h>
#include <cstdio>
#include <string>
using namespace std;

class NSX {
  string MaNSX;
  string TenNSX;
  string DcNSX;

public:
  friend class HANG;
};

class HANG {
  string MaH;
  string TenH;
  NSX x;

public:
  void nhap();
  void xuat();
};

void HANG::nhap() {

  cout << "Nhap ma hang: ";
  fflush(stdin);
  getline(cin, MaH);
  cout << "Nhap ten hang: ";
  fflush(stdin);
  getline(cin, TenH);

  cout << "Nhap ma nsx: ";
  fflush(stdin);
  getline(cin, x.MaNSX);
  cout << "Nhap ten nsx: ";
  fflush(stdin);
  getline(cin, x.TenNSX);
  cout << "Nhap dia chi nsx: ";
  fflush(stdin);
  getline(cin, x.DcNSX);
}

void HANG::xuat() {
    cout << "ma hang: " << MaH << endl;
    cout << "ten hang: " << TenH << endl;
    cout << "ma nsx: " << x.MaNSX << endl;
    cout << "ten hang: " << x.TenNSX << endl;
    cout << "dia chi nsx" << x.DcNSX << endl;
}
int main() {
  HANG h;
  h.nhap();
  h.xuat();
  return 0;
}
