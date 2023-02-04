#include <bits/stdc++.h>
#include <cstdio>
#include <string>
using namespace std;

class NSX {
  string MaNSX;
  string TenNSX;
  string DcNSX;

public:
  void nhap();
  void xuat();
};

void NSX::nhap() {
  cout << "Nhap ma nsx: ";
  fflush(stdin);
  getline(cin, MaNSX);
  cout << "Nhap ten nsx: ";
  fflush(stdin);
  getline(cin, TenNSX);
  cout << "Nhap dia chi nsx: ";
  fflush(stdin);
  getline(cin, DcNSX);
}
void NSX::xuat() {
  cout << setw(10) << MaNSX << setw(15) << TenNSX << setw(15) << DcNSX;
}

class HANG {
  string MaH;
  string TenH;

public:
  void nhap();
  void xuat();
};
int main() {
  HANG h;
  return 0;
}
