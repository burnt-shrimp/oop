#include <bits/stdc++.h>
using namespace std;
class PHIEU;

class NV {
  string mnv;
  string ht;
  string mc;
  string mk;
  string dck;

public:
  void nhap();
  void xuat();
};
void NV::nhap() {
  cout << "\nnhap ma nhan vien: ";
  fflush(stdin);
  getline(cin, mnv);
  cout << "\nnhap ho ten: ";
  fflush(stdin);
  getline(cin, ht);
  cout << "\nnhap ma ca: ";
  fflush(stdin);
  getline(cin, mc);
  cout << "\nnhap ma kho: ";
  fflush(stdin);
  getline(cin, mk);
  cout << "\nnhap dia chi kho: ";
  fflush(stdin);
  getline(cin, dck);
}
void NV::xuat() {
  cout << setw(5) << "ma nhan vien: " << mnv << setw(20) << "ho va ten: " << ht
       << setw(30) << "ma ca: " << mc << endl;
  cout << setw(5) << "ma kho: " << mk << setw(20) << "dia chi kho: " << dck
       << endl;
}

class TB {
  string mtb;
  string ttb;
  int sl;
  double dg;

public:
  void nhap();
  void xuat();
  friend class PHIEU;
  friend void sap(PHIEU &a);
};

void TB::nhap() {
  cout << "\nnhap ma tb: ";
  fflush(stdin);
  getline(cin, mtb);
  cout << "\nnhap ten tb: ";
  fflush(stdin);
  getline(cin, ttb);
  cout << "\nnhap so luong: ";
  cin >> sl;
  cout << "\nnhap don gia: ";
  cin >> dg;
}
void TB::xuat() {
  cout << setw(5) << mtb << setw(15) << ttb << setw(25) << sl << setw(20) << dg
       << setw(20) << sl * dg << endl;
}

class PHIEU {
  string mp;
  string nl;
  NV x;
  TB *y;
  int n;

public:
  void nhap();
  void xuat();
  friend void sua(PHIEU &a);
  friend void sap(PHIEU &a);
};

void PHIEU::nhap() {
  cout << "\nnhap ma phieu: ";
  fflush(stdin);
  getline(cin, mp);
  cout << "\nnhap ngay lap: ";
  fflush(stdin);
  getline(cin, nl);
  x.nhap();
  cout << "\nnhap so thiet bi: ";
  cin >> n;
  y = new TB[n];
  for (int i = 0; i < n; i++) {
    y[i].nhap();
  }
}
void PHIEU::xuat() {
  cout << "DIEN MAY ABC" << endl;
  cout << setw(20) << "PHIEU NHAP KHO" << endl;
  cout << setw(5) << "ma phieu: " << setw(10) << mp << setw(15)
       << "ngay lap: " << nl << endl;
  x.xuat();
  cout << "\ndanh sach thiet lap" << endl;
  cout << setw(5) << "ma tb" << setw(15) << "ten tb" << setw(25) << "so luong"
       << setw(20) << "don gia" << setw(20) << "thanh tien" << endl;
  for (int i = 0; i < n; i++) {
    y[i].xuat();
  }
  int t = 0;
  int z = 0;
  for (int i = 0; i < n; i++) {
    t = t + y[i].sl;
  }
  for (int i = 0; i < n; i++) {
    z = z + y[i].sl * y[i].dg;
  }
  cout << setw(30) << "tong so: " << setw(15) << t << setw(40) << z << endl;
}

void sua(PHIEU &a) { a.nl = "12/10/20"; }

void sap(PHIEU &a) {
  for (int i = 0; i < a.n; i++) {
    for (int j = i + 1; j < a.n; j++) {
      if (a.y[i].dg > a.y[j].dg) {
        TB tg;
        tg = a.y[i];
        a.y[i] = a.y[j];
        a.y[j] = tg;
      }
    }
  }
}
int main() {
  PHIEU a;
  a.nhap();
  a.xuat();
  sua(a);
  a.xuat();
  sap(a);
  a.xuat();
  return 0;
}
