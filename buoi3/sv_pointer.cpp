#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class Date {
  int d, m, y;

public:
  friend class SinhVien;
};

class SinhVien {
  int MaSV;
  string HoTen;
  Date NgaySinh;
  string GTinh;
  string NganhHoc;
  double DiemTK;

public:
  void nhap();
  void xuat();
  friend void diemMax(SinhVien *a, int n);
  friend void chenSV(SinhVien *&a, int &n);
};

void SinhVien::nhap() {
  cout << "Nhap ma sv: ";
  cin >> this->MaSV;
  cin.ignore();
  cout << "Nhap ho ten: ";
  fflush(stdin);
  getline(cin, this->HoTen);
  cout << "Nhap ngay sinh: ";
  cin >> NgaySinh.d >> NgaySinh.m >> NgaySinh.y;
  cin.ignore();
  cout << "Nhap gioi tinh: ";
  fflush(stdin);
  getline(cin, GTinh);
  cout << "Nhap nganh hoc: ";
  fflush(stdin);
  getline(cin, NganhHoc);
  cout << "Nhap diem tk: ";
  cin >> DiemTK;
  cout << endl;
}

void SinhVien::xuat() {
  cout << setw(5) << MaSV << setw(15) << HoTen << setw(15) << NgaySinh.d << "/"
       << NgaySinh.m << "/" << NgaySinh.y << setw(15) << GTinh << setw(15)
       << NganhHoc << setw(15) << DiemTK << endl;
}

void diemMax(SinhVien *a, int n) {
  double max = a[0].DiemTK;
  for (int i = 1; i < n; i++) {
    if (a[i].DiemTK > max) {
      max = a[i].DiemTK;
    }
  }
  for (int i = 0; i < n; i++) {
    if (a[i].DiemTK == max) {
      a[i].xuat();
    }
  }
}

void chenSV(SinhVien *&a, int &n) {
  int vt;
  SinhVien x;
  cout << "Nhap vi tri can chen: ";
  cin >> vt;
  cout << "Nhap thong tin sv can chen: " << endl;
  x.nhap();
  if (vt >= 0 && vt <= n) {
    for (int i = n; i >= vt; i--) {
      a[i] = a[i - 1];
    }
    a[vt] = x;
    n++;
  }

  cout << endl
       << "=============Danh sach sv sau khi chen==============" << endl;
  cout << setw(5) << "Ma SV" << setw(15) << "Ho ten" << setw(15) << "Ngay sinh"
       << setw(15) << "gtinh" << setw(15) << "nganh" << setw(15) << "diem"
       << endl;
  for (int i = 0; i < n; i++) {
    a[i].xuat();
  }
}
int main() {
  SinhVien *a;
  int n;
  do {
    cout << "Nhap so luong sv: ";
    cin >> n;
  } while (n <= 0);

  a = new SinhVien[n];
  for (int i = 0; i < n; i++) {
    cout << "Nhap sv thu " << i + 1 << endl;
    cin.ignore();
    a[i].nhap();
  }

  cout << endl << "=============Danh sach sv vua nhap==============" << endl;
  cout << setw(5) << "Ma SV" << setw(15) << "Ho ten" << setw(15) << "Ngay sinh"
       << setw(15) << "gtinh" << setw(15) << "nganh" << setw(15) << "diem"
       << endl;
  for (int i = 0; i < n; i++) {
    a[i].xuat();
  }

  cout << "sinh vien co diem tk cao nhat la: " << endl;
  diemMax(a, n);
  chenSV(a, n);

  return 0;
}
