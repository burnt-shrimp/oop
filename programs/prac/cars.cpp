#include <cstdio>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class Date {
private:
  int day, month, year;

public:
  friend class XeHoi;
};
class XeHoi {
private:
  string nhanHieu;
  string hangSX;
  string kieuDang;
  string mauSon;
  Date namSX;
  string xuatXu;
  float giaB;
  int n;

public:
  void nhap();
  void xuat();
  string gethangSX() { return hangSX; }
};

void XeHoi::nhap() {
  cout << "Nhap ten nhan hieu: " << fflush(stdin);
  getline(cin, nhanHieu);
  cout << "Nhap ten hang san xuat: " << fflush(stdin);
  getline(cin, hangSX);
  cout << "Nhap kieu dang: " << fflush(stdin);
  getline(cin, kieuDang);
  cout << "Nhap mau: " << fflush(stdin);
  getline(cin, mauSon);
  cout << "Nhap xuat xu: " << fflush(stdin);
  getline(cin, xuatXu);
  cout << "Nhap nam san xuat: ";
  cin >> namSX.year;
}

void XeHoi::xuat() {
  cout << setw(10) << nhanHieu << setw(10) << hangSX << setw(10) << kieuDang
       << setw(10) << mauSon << setw(10) << xuatXu << setw(10) << namSX.year
       << setw(10) << giaB << endl;
}

int main() {
  int x;
  XeHoi *dsx, temp;
  cout << "Nhap so luong xe: ";
  cin >> x;
  dsx = new XeHoi[x];

  for (int i{0}; i < x; i++) {
    cout << "Nhap xe thu " << i + 1 << endl;
    dsx[i].nhap();
  }

  cout << setw(10) << "nhan hieu" << setw(10) << "hang san xuat" << setw(10)
       << "kieu dang" << setw(10) << "mau" << setw(10) << "xuat xu" << setw(10)
       << "nam san xuat" << setw(10) << "gia" << endl;
  for (int i{0}; i < x; i++) {
    dsx[i].xuat();
  }

  return 0;
}
