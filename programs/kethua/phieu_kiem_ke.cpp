#include <cstdio>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
using namespace std;

class TS {
  string tenTS;
  int SL;
  string TT;

public:
  TS() {
    tenTS = "none";
    SL = 0;
    TT = "none";
  }
  TS(string tts, int sl, string tt) {
    tenTS = tts;
    SL = sl;
    TT = tt;
  }
  void nhap();
  void xuat();
};

void TS::nhap() {
  cin.ignore();
  cout << "Nhap ten ts: ";
  fflush(stdin);
  getline(cin, tenTS);
  cout << "nhap so luong ts: ";
  cin >> SL;
  cin.ignore();
  cout << "Nhap tinh trang ts: ";
  fflush(stdin);
  getline(cin, TT);
}

void TS::xuat() {
  cout << left << setw(10) << tenTS << setw(15) << SL << setw(15) << TT << endl;
}

class PHIEU {
  string maP;
  string ngayKK;
  string nvKK;
  string phong;
  string truongP;
  string chucV;
  string maPhong;

  TS *a;

public:
  void nhap();
  void xuat();
};

void PHIEU::nhap() {
  cout << "Nhap ma phieu: "; fflush(stdin);
  getline(cin, maP);
  cout << "Nhap nhan vien kk: "; fflush(stdin);
  getline(cin, nvKK);
  cout << "Nhap phong: "; fflush(stdin);
  getline(cin, phong);
  cout << "Nhap truong phong: "; fflush(stdin);
  getline(cin, truongP);
  cout << "Nhap ma phieu: "; fflush(stdin);
  getline(cin, maP);
  cout << "Nhap ma phieu: "; fflush(stdin);
  getline(cin, maP);
  cout << "Nhap ma phieu: "; fflush(stdin);
  getline(cin, maP);
}
void PHIEU::xuat() {}
int main() { return 0; }
