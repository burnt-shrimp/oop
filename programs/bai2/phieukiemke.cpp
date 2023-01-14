#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class NhanVien {
private:
  string TenNV;
  string CVNV;

public:
  void Nhap();
  void Xuat();
};

void NhanVien::Nhap() {
  fflush(stdin);
  cout << "Ten nhan vien: ";
  getline(cin, TenNV);
  fflush(stdin);
  cout << "Chuc vu: ";
  getline(cin, CVNV);
  fflush(stdin);
}

void NhanVien::Xuat() {
  cout << setw(15) << "Nhan vien: " << setw(15) << TenNV << setw(15)
       << "Chuc vu: " << setw(15) << CVNV << endl;
}

class Phong {
private:
  string MaP;
  string TenP;
  string TruongP;

public:
  void Nhap();
  void Xuat();
};

void Phong::Nhap() {
  fflush(stdin);
  cout << "Ma Phong: ";
  getline(cin, MaP);
  fflush(stdin);
  cout << "Ten Phong: ";
  getline(cin, TenP);
  fflush(stdin);
  cout << "Truong Phong: ";
  getline(cin, TruongP);
  fflush(stdin);
}

void Phong::Xuat() {
  cout << setw(15) << "Ten phong: " << setw(15) << TenP << setw(15)
       << "Ma phong:" << setw(15) << MaP << endl;
  cout << setw(15) << "Truong phong : " << setw(15) << TruongP << endl;
}

class TaiSan {
private:
  string TenTS;
  int SLTS;
  string TTTS;

public:
  void Nhap();
  void Xuat();
  friend class Phieu;
};

void TaiSan::Nhap() {
  cout << "Ten tai san: ";
  fflush(stdin);
  getline(cin, TenTS);
  cout << "So luong: ";
  cin >> SLTS;
  cout << "Tinh trang: ";
  fflush(stdin);
  getline(cin, TTTS);
}

void TaiSan::Xuat() {
  cout << setw(15) << TenTS << setw(15) << SLTS << setw(15) << TTTS << endl;
}

class Phieu {
private:
  string MaPh;
  string Ngay;
  NhanVien x;
  Phong y;
  TaiSan *z;
  int n;

public:
  void Nhap();
  void Xuat();
};

void Phieu::Nhap() {
  fflush(stdin);
  cout << "Ma phieu: ";
  getline(cin, MaPh);
  fflush(stdin);
  cout << "Ngay lap: ";
  getline(cin, Ngay);
  fflush(stdin);

  x.Nhap();
  y.Nhap();
  cout << "So tai san: ";
  cin >> n;
  z = new TaiSan[n];
  for (int i = 0; i < n; i++) {
    z[i].Nhap();
  }
}

void Phieu::Xuat() {
  cout << setw(40) << "Phieu kiem ke tai san" << endl;
  cout << setw(15) << "Ma phieu: " << setw(15) << MaPh;
  cout << setw(15) << "Ngay lap: " << setw(15) << Ngay << endl;

  x.Xuat();
  y.Xuat();
  cout << setw(15) << "Ten tai san" << setw(15) << "So luong" << setw(15)
       << "Tinh trang" << endl;
  for (int i = 0; i < n; i++) {
    z[i].Xuat();
  }
  cout << "tong so tai san: " << n;
  int TongSl{0};
  for (int i = 0; i < n; i++) {
    TongSl += z[i].SLTS;
  }
  cout << "\tTong so luong: " << TongSl;
}

int main() {
  Phieu x;
  x.Nhap();
  x.Xuat();
  return 0;
}
