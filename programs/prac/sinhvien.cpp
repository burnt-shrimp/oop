#include <iomanip>
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
  friend void nhap(SinhVien &);
  friend void in(SinhVien);
};

void nhap(SinhVien &a) {
  a.maSV = "2020601052";
  getline(cin, a.ten);
  cin >> a.lop >> a.ns >> a.gpa;
  if (a.ns[2] != '/')
    a.ns = "0" + a.ns;
  if (a.ns[5] != '/')
    a.ns.insert(3, "0");
}

void in(SinhVien a) {
  cout << a.maSV << " " << a.ten << a.lop << " " << a.ns << fixed << setprecision(2)
       << " " << a.gpa << endl;
}
int main() {
  SinhVien a;
  cout << "Nhap thong tin:" << endl;
  nhap(a);
  in(a);

  return 0;
}
