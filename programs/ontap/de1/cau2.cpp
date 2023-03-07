#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

class DIEM {
  double x, y, z, t;

public:
  friend istream &operator>>(istream &in, DIEM &a);
  friend ostream &operator<<(ostream &out, DIEM &a);
  DIEM();
  DIEM(double x, double y, double z, double t);
  DIEM operator+(DIEM a);
  bool operator*(DIEM a);
};

istream &operator>>(istream &in, DIEM &a) {
  cout << "\nnhap x: ";
  in >> a.x;
  cout << "\nnhap y: ";
  in >> a.y;
  cout << "\nnhap z: ";
  in >> a.z;
  cout << "\nnhap t: ";
  in >> a.t;
  return in;
}
ostream &operator<<(ostream &out, DIEM &a) {
  out << "(" << a.x << "," << a.y << "," << a.z << "," << a.t << ")" << endl;
  return out;
}

DIEM::DIEM() { x = y = z = t = 0; }

DIEM::DIEM(double x, double y, double z, double t) {
  this->x = x;
  this->y = y;
  this->z = z;
  this->t = t;
}

DIEM DIEM::operator+(DIEM a) {
  DIEM tg;
  tg.x = x + a.x;
  tg.y = y + a.y;
  tg.z = z + a.z;
  tg.t = t + a.t;
  return tg;
}

bool DIEM::operator*(DIEM a) {
  if (x == a.x && y == a.y && z == a.z && t == a.t) {
    return true;
  }
  return false;
}
int main() {
  DIEM a, b;
  cout << "\nnhap diem a: "; cin >> a;
  cout << "\nnhap diem b: "; cin >> b;
  cout << "\n========================" << endl;
  cout << "a= " << a << endl;
  cout << "b= " << b << endl;
  DIEM c=a+b;
  cout << "tong 2 diem c= " << c << endl;
  cout << boolalpha;
    if(a*b){
        cout << (a*b) << endl;
    }else{
        cout << (a*b) << endl;
    }
  return 0;
}
