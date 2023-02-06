#include <bits/stdc++.h>
#include <cstdio>
#include <string>
using namespace std;

class QUANLY {
  string maQL;
  string hoTen;

public:
  void nhap();
  void xuat();
};

void QUANLY::nhap() {
  cout << "Nhap ma quan ly: ";
  fflush(stdin);
  getline(cin, maQL);
  cout << "Nhap hoten quan ly: ";
  fflush(stdin);
  getline(cin, hoTen);
}

void QUANLY::xuat() {
  cout << "ma quan ly: " << maQL << endl;
  cout << "ten quan ly: " << hoTen << endl;
}

class MAY {
  string maMay;
  string kieuMay;
  string tinhTrang;

public:
  void nhap();
  void xuat();
};

void MAY::nhap() {
  cout << "Nhap ma may: ";
  fflush(stdin);
  getline(cin, maMay);
  cout << "Nhap kieu may: ";
  fflush(stdin);
  getline(cin, kieuMay);
  cout << "Nhap tinh trang may: ";
  fflush(stdin);
  getline(cin, tinhTrang);
};

void MAY::xuat() {
  cout << "ma may: " << maMay << endl;
  cout << "kieu may: " << kieuMay << endl;
  cout << "tinh trang may: " << tinhTrang << endl;
}

class PHONGMAY {
  string maPhong;
  string tenPhong;
  double dienTich;
  QUANLY x;
  MAY *y;
  int n;

public:
  void nhap();
  void xuat();
};

void PHONGMAY::nhap() {
  cout << "Nhap ma phong: ";
  fflush(stdin);
  getline(cin, maPhong);
  cout << "Nhap ten phong: ";
  fflush(stdin);
  getline(cin, tenPhong);
  cout << "Nhap dien tich: ";
  cin >> dienTich;

  cin.ignore();
  x.nhap();

  cout << "Nhap so may: ";
  cin >> n;
  y = new MAY[n];
  for (int i = 0; i < n; i++) {
    y[i].nhap();
  }
}
void PHONGMAY::xuat() {
  cout << "ma phong: " << maPhong << endl;
  cout << "ten phong: " << tenPhong << endl;
  cout << "dien tich phong: " << dienTich << endl;

  x.xuat();
  for (int i = 0; i < n; i++) {
    y[i].xuat();
    cout << endl;
  }
}
int main() {
  PHONGMAY p;
  p.nhap();
  cout << "\n=======THONG TIN PHONG MAY=======" << endl;
  p.xuat();

  return 0;
}
