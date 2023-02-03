#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class HH {
  string MaH;
  string TenH;
  long DonG;
  int SL;

public:
  void nhap();
  void xuat();
};

void HH::nhap() {
  cin.ignore();
  cout << "Nhap ma hang; ";
  fflush(stdin);
  getline(cin, MaH);
  cout << "Nhap ten hang; ";
  fflush(stdin);
  getline(cin, TenH);
  cout << "Nhap don gia: ";
  cin >> DonG;
  cout << "Nhap so luong: ";
  cin >> SL;
}

void HH::xuat() {
  cout << setw(10) << MaH << setw(15) << TenH << setw(15) << DonG << setw(15)
       << SL << setw(15) << DonG * SL << endl;
}
int main() {
  HH *h;
  int n;

  cout << "Nhap so mat hang: ";
  cin >> n;

  h = new HH[n];

  for (int i = 0; i < n; i++) {
    h[i].nhap();
  }

  cout << "==========danh sach vua nhap=========" << endl;
  cout << setw(10) << "Ma hang" << setw(15) << "Ten hang" << setw(15)
       << "Don gia" << setw(15) << "So luong" << setw(15) << "Thanh tien"
       << endl;

  for (int i = 0; i < n; i++) {
    h[i].xuat();
  }

  return 0;
}
