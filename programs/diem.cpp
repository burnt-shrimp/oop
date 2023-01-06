#include <iostream>
using namespace std;
class Diem {
private:
  int x, y, z;

public:
  Diem() : x{0}, y{0}, z{0} {};
  Diem(int x, int y, int z) : x{x}, y{y}, z{z} {};
  Diem operator+(Diem ds1);
  Diem operator-(Diem ds1);
  friend istream &operator>>(istream &a, Diem &b);
  friend ostream &operator<<(ostream &a, Diem &b);
};

Diem Diem::operator+(Diem ds1) {
  Diem kq;
  kq.x = x + ds1.x;
  kq.y = y + ds1.y;
  kq.z = z + ds1.z;
  return kq;
}

Diem Diem::operator-(Diem ds1) {
  Diem kq;
  kq.x = x - ds1.x;
  kq.y = y - ds1.y;
  kq.z = z - ds1.z;
  return kq;
}

istream &operator>>(istream &a, Diem &b) {
  cout << "nhap x: ";
  a >> b.x;
  cout << "nhap y: ";
  a >> b.y;
  cout << "nhap z: ";
  a >> b.z;
  return a;
}

ostream &operator<<(ostream &a, Diem &b) {
  a << "(" << b.x << ", " << b.y << ", " << b.z << ")" << endl;
  return a;
}

int main() { 
  Diem d1(1,3,5), d2;
  cout << "nhap diem 2";
  cin >> d2;
  Diem d3, d4;
  d3 = d1+d2;
  d4 = d1-d2;

  cout << "d1 + d2"<< d3 << endl;
  cout << "d1 - d2"<< d4 << endl;

  return 0; }
