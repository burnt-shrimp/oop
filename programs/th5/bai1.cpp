#include <bits/stdc++.h>
using namespace std;

class PS {
  int ts, ms;

public:
  friend istream &operator>>(istream &x, PS &y);
  friend ostream &operator<<(ostream &x, PS &y);
  PS operator+(PS y);
  PS operator-(PS y);
  PS operator*(PS y);
  PS operator/(PS y);
  double operator-();
};

istream &operator>>(istream &x, PS &y) {
  cout << "nhap tu so: ";
  x >> y.ts;
  cout << "nhap mau so: ";
  x >> y.ms;
  return x;
}

ostream &operator<<(ostream &x, PS &y) {
  x << y.ts << "/" << y.ms << endl;
  return x;
}

PS PS::operator+(PS y) {
  PS z;
  z.ts = ts * y.ms + ms * y.ts;
  z.ms = ms * y.ms;
  return z;
}

PS PS::operator-(PS y) {
  PS z;
  z.ts = ts * y.ms - ms * y.ts;
  z.ms = ms * y.ms;
  return z;
}

PS PS::operator*(PS y) {
  PS z;
  z.ts = ts * y.ts;
  z.ms = ms * y.ms;
  return z;
}

PS PS::operator/(PS y) {
  PS z;
  z.ts = ts * y.ms;
  z.ms = ms * y.ts;
  return z;
}

double PS::operator-() { return (double)ts / ms; }
int main() {
  PS a, b, c;
  cin >> a;
  cout << a;
  cin >> b;
  cout << b;

  c = a + b;
  cout << "a + b = " << -c << endl;
  c = a - b;
  cout << "a - b = " << -c << endl;
  c = a * b;
  cout << "a * b = " << -c << endl;
  c = a / b;
  cout << "a / b = " << -c << endl;

  return 0;
}
