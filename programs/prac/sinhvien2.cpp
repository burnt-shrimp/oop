#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
using namespace std;

class SinhVien {
private:
  string maSV, ten, ns, lop;
  double gpa;

public:
  SinhVien() : maSV{""}, ten{""}, ns{""}, gpa{0} {}
  SinhVien(string ten, string ns, double gpa) : ten{ten}, ns{ns}, gpa{gpa} {}
  friend istream &operator>>(istream &, SinhVien &);
  friend ostream &operator<<(ostream &, SinhVien);
};

istream &operator>>(istream &in, SinhVien &a) {
  a.maSV = "B20DCC011";
  getline(in, a.ten);
  in >> a.lop >> a.ns >> a.gpa;
  if (a.ns[2] != '/')
    a.ns = "0" + a.ns;
  if (a.ns[5] != '/')
    a.ns.insert(3, "0");
  return in;
}
ostream &operator<<(ostream &out, SinhVien a) {
  out << a.maSV << " " << a.ten << " " << a.lop << " " << a.ns << " " << fixed
      << setprecision(2) << a.gpa << endl;
  return out;
}

int main() {
  SinhVien a;
  cout << "Nhap thong tin:" << endl;
  cin >> a;
  cout << a;

  return 0;
}
