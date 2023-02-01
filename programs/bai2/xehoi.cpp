#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class XeHoi {
  string NhanHieu;
  string HangSX;
  string KieuDang;
  string MauSon;
  string NamSX;
  string XuatXu;
  long GiaBan;

public:
  void nhap();
  void xuat();
  friend void in_toyota(XeHoi *xh, int n);
  friend void sx_giaban(XeHoi *xh, int n);
};

void XeHoi::nhap() {
  cin.ignore();
  cout << "nhan hieu: ";
  fflush(stdin);
  getline(cin, NhanHieu);
  cout << "hang san xuat: ";
  fflush(stdin);
  getline(cin, HangSX);
  cout << "kieu dang: ";
  fflush(stdin);
  getline(cin, KieuDang);
  cout << "mau son: ";
  fflush(stdin);
  getline(cin, MauSon);
  cout << "nam san xuat: ";
  fflush(stdin);
  getline(cin, NamSX);
  cout << "xuat xu: ";
  fflush(stdin);
  getline(cin, XuatXu);
  cout << "gia ban: ";
  cin >> GiaBan;
}

void XeHoi::xuat() {
  cout << setw(5) << NhanHieu << setw(15) << HangSX << setw(15) << KieuDang
       << setw(15) << MauSon << setw(15) << NamSX << setw(15) << XuatXu
       << setw(15) << GiaBan << endl;
}

void in_toyota(XeHoi *xh, int n) {
  for (int i = 0; i < n; i++) {
    if (xh[i].HangSX.compare("Toyota") == 0) {
      xh[i].xuat();
    }
  }
}

void sx_giaban(XeHoi *xh, int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (xh[i].GiaBan > xh[j].GiaBan) {
        XeHoi temp;
        temp = xh[i];
        xh[i] = xh[j];
        xh[j] = temp;
      }
    }
  }
}

int main() {
  XeHoi *xh;
  int n;
  cout << "Nhap so luong: ";
  cin >> n;

  xh = new XeHoi[n];
  for (int i = 0; i < n; i++) {
    xh[i].nhap();
  }

  cout << "===========DANH SACH XE HOI============" << endl;
  cout << setw(5) << "Nhan hieu" << setw(15) << "HangSX" << setw(15)
       << "Kieu dang" << setw(15) << "Mau son" << setw(15) << "NamSX"
       << setw(15) << "Xuat xu" << setw(15) << "Gia ban" << endl;

  for (int i = 0; i < n; i++) {
    xh[i].xuat();
  }

  cout << "HANG TOYOTA" << endl;
  in_toyota(xh, n);
  
  cout << "SAP XEP THEO GIA BAN" << endl;
  sx_giaban(xh, n);

  cout << "gia ban sau khi da sap xep: " << endl;
  for (int i = 0; i < n; i++) {
    xh[i].xuat();
  }
  return 0;
}
