#include <bits/stdc++.h>
#include <cstdio>
#include <string>
using namespace std;

class HANG;
class DATE {
  int d, m, y;

public:
  friend class HANG;
  friend void in_2017(HANG *a, int n);
};

class HANG {
  string maHang;
  string tenHang;
  DATE ngaySX;

public:
  void nhap();
  void xuat();
  friend void nhap_ds(HANG *a, int n);
  friend void xuat_ds(HANG *a, int n);
  friend void in_2017(HANG *a, int n);
};

void HANG::nhap() {
  cout << "nhap ma hang: ";
  fflush(stdin);
  getline(cin, maHang);
  cout << "nhap ten hang: ";
  fflush(stdin);
  getline(cin, tenHang);
  cout << "nhap ngay sx: ";
  cin >> ngaySX.d >> ngaySX.m >> ngaySX.y;
}
void HANG::xuat() {
  cout << setw(15) << maHang;
  cout << setw(15) << tenHang;
  cout << setw(15) << ngaySX.d << "/" << ngaySX.m << "/" << ngaySX.y << endl;
}

void nhap_ds(HANG *a, int n) {
  for (int i = 0; i < n; i++) {
    a[i].nhap();
  }
}

void xuat_ds(HANG *a, int n) {
  cout << "\n==============danh sach hang=========" << endl;
  cout << setw(15) << "ma hang";
  cout << setw(15) << "ten hang";
  cout << setw(15) << "ngay sx" << endl;
  for (int i = 0; i < n; i++) {
    a[i].xuat();
  }
}

void in_2017(HANG *a, int n) {
  cout << "\n==============danh sach hang nam 2017=========" << endl;
  for (int i = 0; i < n; i++) {
    if (a[i].ngaySX.y == 2017) {
      a[i].xuat();
    }
  }
}
int main() {
  HANG *a;
  int n;

  do {
    cout << "nhap so luong hang: ";
    cin >> n;
  } while (n < 0);
  a = new HANG[n];
  nhap_ds(a, n);
  xuat_ds(a, n);
  in_2017(a, n);

  return 0;
}
