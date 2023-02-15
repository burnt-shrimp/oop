#include <bits/stdc++.h>
using namespace std;

class TTB2 {
  double a, b, c;

public:
  TTB2() { a = b = c = 0; }
  TTB2(double a, double b, double c) {
    this->a = a;
    this->b = b;
    this->c = c;
  }
  friend ostream &operator<<(ostream &x, TTB2 &y);
  TTB2 operator+(TTB2 y);
  TTB2 operator-(TTB2 y);
  TTB2 operator-();
};

ostream &operator<<(ostream &x, TTB2 &y) {
  x << y.a << "*x^2 + " << y.b << "*x + " << y.c << endl;
  return x;
}

TTB2 TTB2::operator+(TTB2 y) {
  TTB2 z;
  z.a = a + y.a;
  z.b = b + y.b;
  z.c = c + y.c;
  return z;
}

TTB2 TTB2::operator-(TTB2 y) {
  TTB2 z;
  z.a = a - y.a;
  z.b = b - y.b;
  z.c = c - y.c;
  return z;
}

TTB2 TTB2::operator-() {
  TTB2 z;
  z.a = -a;
  z.b = -b;
  z.c = -c;
  return z;
}

int main() {
  TTB2 x(2, 5, 4), y(1, 4, 2);
  x = -x;
  y = -y;

  cout << "tam thuc x da dao dau: " << x << endl;
  cout << "tam thuc y da dao dau: " << y << endl;
  TTB2 z;
  z = x + y;
  cout << "tam thuc tong: " << z << endl;
  z = x - y;
  cout << "tam thuc hieu: " << z << endl;

  return 0;
}
