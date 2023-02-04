#include <cmath>
#include <iostream>
using namespace std;

class HT {
  double r;

public:
  HT() { r = 0; }
  HT(int a) { this->r = a; }
  void nhap();
  void xuat();
  double dt();
  friend ostream &operator<<(ostream &x, HT y);
  double operator+(HT x);
  double operator-(HT x);
  bool operator>(HT x);
  bool operator<(HT x);
};

void HT::nhap() {
  cout << "nhap ban kinh: ";
  cin >> r;
}
void HT::xuat() { cout << "tong dien tich la: " << this->dt() << endl; }

double HT::dt() { return M_PI * r * r; }

double HT::operator+(HT x) { return dt() + x.dt(); }

double HT::operator-(HT x) { return dt() - x.dt(); }

bool HT::operator>(HT x) {
  if (this->dt() > x.dt()) {
    return true;
  }
  return false;
}

bool HT::operator<(HT x) {
  if (this->dt() < x.dt()) {
    return true;
  }
  return false;
}

ostream &operator<<(ostream &x, HT y) { return x << y.dt(); }

int main() {
  // HT p(5), q(2);
  HT p, q;
  HT t;
  p.nhap();
  q.nhap();
  t = p + q;
  t.xuat();

  // cout << "tong p va q: " << p + q << endl;
  //
  // cout << "hieu p va q: " << p - q << endl;

  if (p > q) {
    cout << "p > q" << endl;
  } else {
    cout << "p < q" << endl;
  }

  return 0;
}
