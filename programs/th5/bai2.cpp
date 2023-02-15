#include <bits/stdc++.h>
using namespace std;

class SP {
  double thuc, ao;

public:
  SP() { thuc = ao = 0; }
  SP(double thuc, double ao) {
    this->thuc = thuc;
    this->ao = ao;
  }
  friend istream &operator>>(istream &x, SP &y);
  friend ostream &operator<<(ostream &x, SP &y);
  SP operator+(SP y);
  SP operator-(SP y);
};

istream &operator>>(istream &x, SP &y) {
  cout << "nhap phan thuc: ";
  x >> y.thuc;
  cout << "nhap phan ao: ";
  x >> y.ao;
  return x;
}

ostream &operator<<(ostream &x, SP &y) {
  x << y.thuc << " + i*" << y.ao << endl;
  return x;
}

SP SP::operator+(SP y) {
  SP z;
  z.thuc = thuc + y.thuc;
  z.ao = ao + y.ao;
  return z;
}

SP SP::operator-(SP y) {
  SP z;
  z.thuc = thuc - y.thuc;
  z.ao = ao - y.ao;
  return z;
}

int main() {
  SP p1(3, 5), p2(2, 4), p3, p4;
  p3 = p1 + p2;
  p4 = p1 - p2;

  cout << "so phuc p1 = " << p1 << endl;
  cout << "so phuc p2 = " << p2 << endl;
  cout << "p1 + p2 = " << p3 << endl;
  cout << "p1 - p2 = " << p4 << endl;

  return 0;
}
