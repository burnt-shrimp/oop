#include <bits/stdc++.h>
#include <cstdio>
#include <string>
using namespace std;

class HANG {
  string MaH;
  string TenH;
  long DonG;

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
  cout << "Nhap don gia: ";
  cin >> DonG;
}
void HANG::xuat() {
  cout << setw(15) << MaH << setw(15) << TenH << setw(15) << DonG;
}

class PHIEU {
  string MaP;
  HANG *x;
  int n;

public:
  void nhap();
  void xuat();
};

void PHIEU::nhap() {
  cout << "Nhap ma phieu: ";
  fflush(stdin);
  getline(cin, MaP);

  cout << "Nhap so luong hang: ";
  cin >> n;

  x = new HANG[n];
  for (int i = 0; i < n; i++) {
    cin.ignore();
    x[i].nhap();
  }
}
void PHIEU::xuat() {
  cout << setw(10) << MaP << endl;
  for (int i = 0; i < n; i++) {
    x[i].xuat();
    cout << endl;
  }
}
int main() {
  PHIEU p;
  p.nhap();
  cout << "=============danh sach========" << endl;
  p.xuat();
  return 0;
}
