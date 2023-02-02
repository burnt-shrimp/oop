#include <iostream>
using namespace std;

class PS {
  double ts, ms;

public:
  void nhap();
  void xuat();
  PS operator+(PS y);
  PS operator-();
  friend istream &operator>>(istream &x, PS &y);
  friend ostream &operator<<(ostream &x, PS &y);
};

void PS::nhap() {
  cout << "Nhap tu so: ";
  cin >> ts;
  cout << "Nhap mau so: ";
  cin >> ms;
}
void PS::xuat() { cout << "Phan so: " << ts << "/" << ms << endl; }

PS PS::operator+(PS y) {
  PS z;
  z.ts = ts * y.ms + ms * y.ts;
  z.ms = ms * y.ms;
  return z;
}

PS PS::operator-() {
  PS z;
  z.ts = -ts;
  z.ms = ms;
  return z;
}

istream &operator>>(istream &x, PS &y) {
  cout << "Nhap tu so: ";
  x >> y.ts;
  cout << "Nhap mau so: ";
  x >> y.ms;
  return x;
}

ostream &operator<<(ostream &x, PS &y) {
  x << y.ts << "/" << y.ms << endl;
  return x;
}
int main() {
  PS x, y, z;
  // x.nhap();
  // y.nhap();
  cin >> x;
  cin >> y;

  z = x + y;
  // z.xuat();
  cout << z;

  z = -z;
  cout << "doi dau phan so: " << endl;
  // z.xuat();
  cout << z;

  return 0;
}
