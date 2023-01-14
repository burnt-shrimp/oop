#include <iostream>
using namespace std;

int gcd(int a, int b){
  if(b == 0) return a;
  return gcd(b, a%b);
}


class PS {
private:
  int ts, ms;

public:
  PS() : ts{1}, ms{1}{};
  PS(int a, int b) : ts{a}, ms{b}{};
  PS operator+(PS y);
  PS operator-();
  friend istream &operator>>(istream &x, PS &y);
  friend ostream &operator<<(ostream &x, PS &y);
  void rutgon();
};

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
  x << y.ts << "/" << y.ms;
  return x;
}

void PS::rutgon() {
  int g = gcd(ts, ms);
  ts /= g;
  ms /= g; 
}

int main() {
  PS p1, p2;
  cout << "Nhap ps 1: ";
  cin >> p1;
  cout << "Nhap ps 2: ";
  cin >> p2;
  PS p;
  p = p1 + p2;
  cout << "cong 2 ps " << p1 << " + " << p2 << " = " << p << endl;
  p = -p;
  cout << "sau khi doi dau: " << p << endl;

  cout << "ps sau khi rut gon" << endl;
  p.rutgon();
  cout << p << endl;


  return 0;
}
