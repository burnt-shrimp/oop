#include <bits/stdc++.h>
#include <cstdio>
#include <string>
using namespace std;

class PTB2 {
  int a, b, c;

public:
  PTB2();
  PTB2(int a, int b, int c);
  void nhap();
  void xuat();
  void giai();
};

PTB2::PTB2() {
  a = 0;
  b = 0;
  c = 0;
}

PTB2::PTB2(int a, int b, int c) {
  this->a = a;
  this->b = b;
  this->c = c;
}

void PTB2::nhap() {
  cout << "nhap a, b, c: ";
  cin >> a >> b >> c;
}
void PTB2::xuat() {
  cout << "pt bac 2 co dang: " << a << "x^2 + " << b << "x + " << c << " =0"
       << endl;
}

void PTB2::giai() {
  double delta = b * b - 4 * a * c;

  if (a == 0) {
    cout << "x = " << (-c) / b << endl;
  } else if (delta == 0) {
    cout << "x1 = x2 = " << -(b / 2 * a) << endl;
  } else if (delta > 0) {
    cout << "x1 = " << (double)(-b + sqrt(delta)) / (2 * a) << endl;
    cout << "x2 = " << (double)(-b - sqrt(delta)) / (2 * a) << endl;
  } else {
    cout << "phuong trinh vo nghiem!" << endl;
  }
}
int main() {
  PTB2 p(4, -2, -6), q;
  p.xuat();
  p.giai();

  q.nhap();
  q.xuat();
  q.giai();

  return 0;
}
