#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class SACH {
  string MaS;
  string TenS;
  string NXB;
  int ST;
  long GiaT;

public:
  void nhap();
  void xuat();
};

void SACH::nhap() {
  cin.ignore();
  cout << "Nhap ma sach: ";
  fflush(stdin);
  getline(cin, MaS);
  cout << "Nhap ten sach: ";
  fflush(stdin);
  getline(cin, TenS);
  cout << "Nhap nxb: ";
  fflush(stdin);
  getline(cin, NXB);
  cout << "Nhap so trang: ";
  cin >> ST;
  cout << "Nhap gia tien: ";
  cin >> GiaT;
}
void SACH::xuat() {
  cout << setw(10) << MaS << setw(15) << TenS << setw(15) << NXB << setw(15)
       << ST << setw(15) << GiaT << endl;
}

int main() {
  SACH *s;
  int n;

  cout << "Nhap so sach: ";
  cin >> n;

  s = new SACH[n];

  for (int i = 0; i < n; i++) {
    s[i].nhap();
  }

  cout << "==========DANH SACH========" << endl;
  cout << setw(10) << "ma sach" << setw(15) << "ten sach" << setw(15) << "nxb"
       << setw(15) << "so trang" << setw(15) << "gia tien" << endl;
  for (int i = 0; i < n; i++) {
    s[i].xuat();
  }

  return 0;
}
