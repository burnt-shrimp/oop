#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class TV;
class NSX {
  string tenNSX;

public:
  void nhap();
  void xuat();
};

void NSX::nhap() {
  // cout << "Nhap"
}

void NSX::xuat() {}
class HANG {
protected:
  string tenH;
  NSX x;
  long donGia;

public:
  void nhap();
  void xuat();
};

void HANG::nhap() {}

void HANG::xuat() {}

class DATE {
  int d, m, y;

public:
  void nhap();
  void xuat();
  friend class TV;
  friend void in_2021(TV *tv, int n);
};

void DATE::nhap() {}

void DATE::xuat() {}

class TV : public HANG {
  string kichT;
  DATE ngayNhap;

public:
  void nhap();
  void xuat();
  friend void in_2021(TV *tv, int n);
  friend void in_lg(TV *tv, int n);
};

void TV::nhap() { HANG::nhap(); }

void TV::xuat() { HANG::xuat(); }

void in_2021(TV *tv, int n) {
  for (int i = 0; i < n; i++) {
    if (tv[i].ngayNhap.y == 2021) {
      tv[i].xuat();
    }
  }
}

void in_lg(TV *tv, int n) {
  for (int i = 0; i < n; i++) {
    if (tv[i].tenH.compare("lg") == 0) {
      tv[i].xuat();
    }
  }
}
int main() {
  HANG h1;
  return 0;
}
