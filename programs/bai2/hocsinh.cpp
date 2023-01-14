#include <iostream>
#include <string>
using namespace std;
class HocSinh {
  string Hoten;
  int ngaySinh;
  string gioiTinh;
  double diemTB;

public:
  void nhap();
  void xuat();
  string getHoten() { return Hoten; }
  void setHoten(string ht) { Hoten = ht; }
  double getDTB() { return diemTB; }
  void setDTB(double dtb) { diemTB = dtb; }
};

void HocSinh::nhap(){
    cout << "Nhap ho ten: "; setHoten("nguyen van a");
    cout << "Nhap ngay sinh: "; cin >> ngaySinh;
    setDTB(8.9);
}

void HocSinh::xuat(){
    cout << "Ho ten hoc sinh: " << getHoten() << endl;
    cout << "Ngay sinh: " << ngaySinh<< endl;
    cout << "Diem tb: " << getDTB()<< endl;
}
int main() {
  HocSinh a;
  // a.setHoten("Nguyen van a");
  // cout << "ho ten hs: " << a.getHoten() << endl;
  // a.setDTB(9.0);
  // cout << "diem tb: " << a.getDTB() << endl;
  a.nhap();
  a.xuat();
  return 0;
}
