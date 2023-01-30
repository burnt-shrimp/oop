#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class Date {
  int d, m, y;

public:
  void nhap() {
    cout << "Nhap ngay san xuat: ";
    cin >> d >> m >> y;
  }
  void xuat() { cout << d << "/" << m << "/" << y; }
  friend class SP;
  friend class HDT;
};

class SP {
protected:
  string MaSP;
  string TenSP;
  Date NgaySX;
  double TrongL;
  string MauSac;
};

class HDT : public SP {
private:
  double congS;
  double dongD;

public:
  void nhap();
  void xuat();
};

void HDT::nhap() {
  cout << "Nhap ma sp: ";
  fflush(stdin);
  getline(cin, MaSP);
  cout << "Nhap ten sp: ";
  fflush(stdin);
  getline(cin, TenSP);
  NgaySX.nhap();
  cout << "Trong luong: ";
  cin >> TrongL;
  cin.ignore();
  cout << "Nhap mau sac sp: ";
  fflush(stdin);
  getline(cin, MauSac);
  cout << "cong suat: ";
  cin >> congS;
}

void HDT::xuat() {
  cout << setw(10) << MaSP << setw(15) << TenSP << setw(15) << NgaySX.d << "/"
       << NgaySX.m << "/" << NgaySX.y << setw(15) << TrongL << setw(15)
       << MauSac << endl;
}
int main() {
  HDT *h1;
  int n;
  cout << "Nhap so hdt: ";
  cin >> n;

  h1 = new HDT[n];

  for (int i = 0; i < n; i++) {
    h1[i].nhap();
  }

  for (int i = 0; i < n; i++) {
    h1[i].xuat();
  }

  return 0;
}
