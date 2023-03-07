#include <bits/stdc++.h>
using namespace std;

class HANG {
  double tl, gt, tt;

public:
  friend istream &operator>>(istream &in, HANG &a);
  friend ostream &operator<<(ostream &out, HANG &a);
  HANG();
  HANG(double tl, double gt, double tt);
  HANG operator+(HANG a);
  bool operator*(HANG a);
};

istream &operator>>(istream &in, HANG &a) {
  cout << "\nnhap trong luong: ";
  in >> a.tl;
  cout << "\nnhap gia tien: ";
  in >> a.gt;
  cout << "\nnhap the tich: ";
  in >> a.tt;
  return in;
}
ostream &operator<<(ostream &out, HANG &a) {
  cout << "trong luong: " << a.tl << setw(20) << "gia tien: " << a.gt
       << setw(20) << "the tich: " << a.tt << endl;
  return out;
}

HANG::HANG() { tl = gt = tt = 0; }

HANG::HANG(double tl, double gt, double tt) {
  this->tl = tl;
  this->gt = gt;
  this->tt = tt;
}

HANG HANG::operator+(HANG a) {
  HANG tg;
  tg.tl = tl + a.tl;
  tg.gt = gt + a.gt;
  tg.tt = tt + a.tt;
  return tg;
}

bool HANG::operator*(HANG a) {
  if (tl == a.tl && gt == a.gt) {
    return true;
  }
  return false;
}

int main() {
  HANG a, b;
  cout << "\nnhap hang thu 1: ";
  cin >> a;
  cout << "\nnhap hang thu 2: ";
  cin >> b;
  cout << "\n===================" << endl;
  cout << "hang 1: " << a << endl;
  cout << "hang 2: " << b << endl;
  HANG c = a + b;
  cout << "tong hang moi: " << c << endl;
  cout << boolalpha;
  if (a * b) {
    cout << (a * b);
  } else {
    cout << (a * b);
  }
  return 0;
}
