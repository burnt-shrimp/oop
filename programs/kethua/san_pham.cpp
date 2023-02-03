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
  friend void in_tronglt(HDT *hdt, int n);
};

void HDT::nhap() {
  cin.ignore();
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
  cout << setw(10) << MaSP << setw(15) << TenSP << setw(15);
  NgaySX.xuat();
  cout << setw(15) << TrongL << setw(15) << MauSac << setw(15) << congS << endl;
}

void in_tronglt(HDT *hdt, int n) {
  double min = hdt[0].TrongL;
  int hdtmin;
  for (int i = 1; i < n; i++) {
    if (hdt[i].TrongL < min) {
      min = hdt[i].TrongL;
      hdtmin = i;
    }
  }

  hdt[hdtmin].xuat();
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

  cout << setw(10) << "Ma San Pham" << setw(15) << "Ten san pham" << setw(15)
       << "Ngay san xuat";
  cout << setw(15) << "Trong luong" << setw(15) << "Mau sac" << setw(15)
       << "Cong suat" << endl;

  for (int i = 0; i < n; i++) {
    h1[i].xuat();
  }

  cout << "mat hang co trong luong thap nhat la: " << endl;
  in_tronglt(h1, n);
  return 0;
}
