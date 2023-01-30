#include <cstdio>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class DN;
class Date {
  int d, m, y;

public:
  void nhap() {
    cout << "Nhap ngay thanh lap: ";
    cin >> d >> m >> y;
  };
  void xuat() { cout << d << "/" << m << "/" << y; };
  friend void tong_dt(DN *dn, int n);
};

class DiaChi {
  string thanhPho;

public:
  friend class DN;
  friend void in_hanoi(DN *dn, int n);
};

class DN {
  int maDN;
  string tenDN;
  Date ngayTL;
  DiaChi dc;
  double doanhThu;

public:
  void nhap();
  void xuat();
  friend void in_hanoi(DN *dn, int n);
  friend void tong_dt(DN *dn, int n);
  friend void sua_ma(DN *dn, int n);
};

void DN::nhap() {
  cout << "Nhap ma DN: ";
  cin >> maDN;
  cin.ignore();
  cout << "Nhap ten doanh nghiep: ";
  fflush(stdin);
  getline(cin, tenDN);
  ngayTL.nhap();
  cin.ignore();
  cout << "Nhap thanh pho: ";
  fflush(stdin);
  getline(cin, dc.thanhPho);
  cout << "Nhap doanh thu: ";
  cin >> doanhThu;
}

void DN::xuat() {
  cout << setw(10) << maDN << setw(15) << tenDN;
  ngayTL.xuat();
  cout << setw(15) << dc.thanhPho << setw(15) << doanhThu << endl;
}

void in_hanoi(DN *dn, int n) {
  for (int i = 0; i < n; i++) {
    if (dn->dc.thanhPho.compare("Ha Noi") == 0) {
      dn[i].xuat();
    }
  }
}

void tong_dt(DN *dn, int n) {
  double tong;
  for (int i = 0; i < n; i++) {
    if (dn[i].ngayTL.y == 2015) {
      tong += dn[i].doanhThu;
    }
  }
  cout << "Tong doanh thu cua doanh nghiep nam 2015:" << tong << endl;
}

void sua_ma(DN *dn, int n) {
  int maMoi;
  cout << "Nhap ma dn moi: ";
  cin >> maMoi;
  for (int i = 0; i < n; i++) {
    if (dn[i].maDN == maMoi) {
      dn[i].nhap();
    }
  }
}
int main() {
  DN *dn;
  int n;

  cout << "Nhap so doanh nghiep: ";
  cin >> n;
  dn = new DN[n];

  for (int i = 0; i < n; i++) {
    dn[i].nhap();
  }

  cout << "==========DS DOANH NGHIEP VUA NHAP==============" << endl;
  for (int i = 0; i < n; i++) {
    dn[i].xuat();
  }

  cout << "In TP Hanoi" << endl;
  in_hanoi(dn, n);
  cout << "Tong doanh thu" << endl;
  tong_dt(dn, n);

  sua_ma(dn, n);

  cout << "in lai ds" << endl;
  for (int i = 0; i < n; i++) {
    dn[i].xuat();
  }
  return 0;
}
