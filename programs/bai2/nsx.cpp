#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class NSX {
  string MaNSX;
  string TenNSX;
  string DcNSX;

public:
  friend class Hang;
};

class Hang {
  string MaH;
  string TenH;
  double DonG;
  double TrongL;
  NSX x;

public:
  void nhap();
  void xuat();
};

void Hang::nhap() {
  cout << "Nhap ma hang: ";
  fflush(stdin);
  getline(cin, MaH);
  cout << "Nhap ten hang: ";
  fflush(stdin);
  getline(cin, TenH);
  cout << "Nhap don gia: ";
  cin >> DonG;
  cout << "Nhap trong luong: ";
  cin >> TrongL;

  cin.ignore();
  cout << "Nhap ma nha san xuat: ";
  fflush(stdin);
  getline(cin, x.MaNSX);
  cout << "Nhap ten nha san xuat: ";
  fflush(stdin);
  getline(cin, x.TenNSX);
  cout << "Nhap dia chi nha san xuat: ";
  fflush(stdin);
  getline(cin, x.DcNSX);
}

void Hang::xuat() {
  cout << "Ma hang: " << MaH << endl;
  cout << "Ten hang: " << TenH << endl;
  cout << "Don gia: " << DonG << endl;
  cout << "Trong luong: " << TrongL << endl;
  cout << "Ma NSX: " << x.MaNSX << endl;
  cout << "Ten NSX: " << x.TenNSX << endl;
  cout << "Dia chi NSX: " << x.DcNSX << endl;
}
int main() {
  Hang a;
  a.nhap();
  a.xuat();

  return 0;
}
