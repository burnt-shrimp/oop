#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class HangHoa {
  string MaH;
  string TenH;
  int SoL;
  long DonG;

public:
  void nhap();
  void xuat();
  long thanhTien() { return SoL * DonG; }
};

void HangHoa::nhap() {
  cout << "Nhap ma hang: ";
  fflush(stdin);
  getline(cin, MaH);
  cout << "Nhap ten hang: ";
  fflush(stdin);
  getline(cin, TenH);
  cout << "Nhap so luong: ";
  cin >> SoL;
  cout << "Nhap don gia: ";
  cin >> DonG;
}

void HangHoa::xuat() {
  cout << setw(5) << MaH << setw(15) << TenH << setw(15) << SoL << setw(15)
       << DonG << setw(15) << thanhTien() << endl;
}

class Phieu {
  string MaP;
  string TenKH;
  string DienT;
  HangHoa *a;
  int n;

public:
  void nhap();
  void xuat();
};

void Phieu::nhap() {
  cout << "Nhap ma phieu: ";
  fflush(stdin);
  getline(cin, MaP);
  cout << "Nhap ten khach hang: ";
  fflush(stdin);
  getline(cin, TenKH);
  cout << "dien thoai: ";
  fflush(stdin);
  getline(cin, DienT);
  cout << "Nhap so luong hang: ";
  cin >> n;

  a = new HangHoa[n];
  for (int i = 0; i < n; i++) {
    cout << "Nhap hang hoa thu " << i + 1 << ": ";
    cin.ignore();
    a[i].nhap();
  }
}

void Phieu::xuat() {
  cout << endl << setw(30) << "PHIEU MUA HANG" << endl;
  cout << "Ma phieu: " << MaP << endl;
  cout << "Ten khach hang: " << TenKH << endl;
  cout << "So dien thoai: " << DienT << endl;

  cout << "Danh sach hang hoa" << endl;
  cout << setw(5) << "Ma hang" << setw(15) << "Ten Hang" << setw(15)
       << "So Luong" << setw(15) << "Don Gia" << setw(15) << "Thanh Tien"
       << endl;
  for (int i = 0; i < n; i++) {
    a[i].xuat();
  }

  long tong = 0;
  for (int i = 0; i < n; i++) {
    tong += a[i].thanhTien();
  }
  cout << setw(30) << "Cong thanh tien: " << tong << endl;
}
int main() {
  Phieu a;
  a.nhap();
  a.xuat();
  return 0;
}
