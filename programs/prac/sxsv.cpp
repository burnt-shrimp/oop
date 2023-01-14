#include <algorithm>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class SinhVien {
private:
  string maSV, ten, lop, email;

public:
  SinhVien() : maSV{""}, ten{""}, lop{""}, email{""} {};
  SinhVien(string ten, string lop, string email)
      : ten{ten}, lop{lop}, email{email} {};
  friend istream &operator>>(istream &, SinhVien &);
  friend ostream &operator<<(ostream &, SinhVien);
  string getLop() { return this->lop; }
  bool operator<(SinhVien another) { return this->maSV < another.maSV; }
};

istream &operator>>(istream &in, SinhVien &a) {
  in >> a.maSV;
  in.ignore();
  getline(in, a.ten);
  in >> a.lop >> a.email;
  return in;
}
ostream &operator<<(ostream &out, SinhVien a) {
  out << a.maSV << " " << a.ten << " " << a.lop << " " << a.email << endl;
  return out;
}

bool cmp(SinhVien a, SinhVien b) { return a.getLop() < b.getLop(); }
int main() {
  vector<SinhVien> v;
  SinhVien tmp;
  while (cin >> tmp) {
    v.push_back(tmp);
  }
  sort(v.begin(), v.end());
  for (SinhVien x : v) {
    cout << x;
  }
  return 0;
}
