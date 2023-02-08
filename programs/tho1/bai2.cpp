#include <bits/stdc++.h>
#include <cstdio>
#include <string>
using namespace std;

class DIEM {
  string tenMon;
  int soTrinh;
  double diem;

public:
  void nhap();
  void xuat();
  friend class PHIEU;
  friend double diemtb(DIEM *d, int n);
};

void DIEM::nhap() {
  cout << "nhap ten mon: ";
  fflush(stdin);
  getline(cin, tenMon);
  cout << "nhap so trinh: ";
  cin >> soTrinh;
  cout << "nhap diem: ";
  cin >> diem;
}

void DIEM::xuat() {
  cout << setw(15) << tenMon;
  cout << setw(15) << soTrinh;
  cout << setw(15) << diem << endl;
}

class PHIEU {
  string maSV;
  string tenSV;
  string lop;
  int khoa;
  DIEM *d;
  int n;

public:
  void nhap();
  void xuat();
  friend double diemtb(DIEM *d, int n);
  void in_monhoc();
  void chen_mon();
};

void PHIEU::nhap() {
  cout << "nhap ma sv: ";
  fflush(stdin);
  getline(cin, maSV);
  cout << "nhap ten sv: ";
  fflush(stdin);
  getline(cin, tenSV);
  cout << "nhap lop: ";
  fflush(stdin);
  getline(cin, lop);
  cout << "nhap khoa: ";
  cin >> khoa;

  do {
    cout << "nhap so mon: ";
    cin >> n;
  } while (n < 0);

  d = new DIEM[n];
  for (int i = 0; i < n; i++) {
    cin.ignore();
    d[i].nhap();
  }
}
void PHIEU::xuat() {
  cout << "=============PHIEU BAO DIEM===========" << endl;
  cout << "Ma sinh vien: " << maSV;
  cout << setw(20) << "Ten sinh vien: " << tenSV << endl;
  cout << "lop: " << lop << setw(20) << "khoa: " << khoa << endl;

  cout << setw(15) << "ten mon";
  cout << setw(15) << "so trinh";
  cout << setw(15) << "diem" << endl;
  for (int i = 0; i < n; i++) {
    d[i].xuat();
  }

  cout << setw(30) << "diem trung binh" << setw(15) << diemtb(d, n) << endl;
}

double diemtb(DIEM *d, int n) {
  double dtb;
  for (int i = 0; i < n; i++) {
    dtb += d[i].soTrinh * d[i].diem;
  }
  return dtb;
}

void PHIEU::in_monhoc() {
  cout << "ten mon hoc co so trinh > 3" << endl;
  for (int i = 0; i < n; i++) {
    if (d[i].soTrinh > 3) {
      cout << d[i].tenMon << endl;
    }
  }
}

void PHIEU::chen_mon() {

  DIEM *d2;
  n = n + 1;
  d2 = new DIEM[n];
  for (int i = 0; i < n - 1; i++) {
    d2[i] = d[i];
  }

  d2[n - 1].nhap();
  cout << setw(15) << "ten mon";
  cout << setw(15) << "so trinh";
  cout << setw(15) << "diem" << endl;
  for (int i = 0; i < n; i++) {
    d2[i].xuat();
  }
}

int main() {
  PHIEU x;
  x.nhap();
  x.xuat();
  x.in_monhoc();
  x.chen_mon();

  return 0;
}
