#include <bits/stdc++.h>
using namespace std;

class PHIEU;
class NV {
  string mnv;
  string ht;
  string mpb;
  string tpb;
  int ttl;
  int nam;

public:
  void nhap();
  void xuat();
};

void NV::nhap() {
  cout << "\nnhap ma nhan vien: ";
  fflush(stdin);
  getline(cin, mnv);
  cout << "\nnhap ho ten: ";
  fflush(stdin);
  getline(cin, ht);
  cout << "\nnhap ma phong ban: ";
  fflush(stdin);
  getline(cin, mpb);
  cout << "\nnhap ten phong ban: ";
  fflush(stdin);
  getline(cin, tpb);
  cout << "\nnhap thang tinh luong: ";
  cin >> ttl;
  cout << "\nnhap nam: ";
  cin >> nam;
}
void NV::xuat() {
  cout << setw(15) << "ma nhan vien: " << mnv << setw(15) << "ho va ten: " << ht
       << setw(15) << "ma phong ban: " << mpb << endl;
  cout << setw(15) << "ten phong ban: " << tpb << setw(15) << "thang tinh luong"
       << ttl << setw(15) << "nam" << nam << endl;
}

class KH {
  string mkh;
  string tk;
  int sl;
  int tu;
  int cl;

public:
  void nhap();
  void xuat();
  friend class PHIEU;
  friend void sx(PHIEU &a);
};

void KH::nhap() {
  cout << "\nnhap ma khach hang: ";
  fflush(stdin);
  getline(cin, mkh);
  cout << "\nnhap ten khoan: ";
  fflush(stdin);
  getline(cin, tk);
  cout << "\nnhap so luong: ";
  cin >> sl;
  cout << "\nnhap tam ung: ";
  cin >> tu;
  cout << "\nnhap con lai: ";
  cin >> cl;
}
void KH::xuat() {
  cout << mkh << setw(15) << tk << setw(15) << sl << setw(15) << tu << setw(15)
       << cl << endl;
}

class PHIEU {
  string mp;
  string nl;
  NV x;
  KH *y;
  int n;

public:
  void nhap();
  void xuat();
  friend void sua(PHIEU &a);
  friend void sx(PHIEU &a);
};

void PHIEU::nhap() {
  cout << "\nnhap ma phieu: ";
  fflush(stdin);
  getline(cin, mp);
  cout << "\nnhap ngay lap: ";
  fflush(stdin);
  getline(cin, nl);
  x.nhap();
  cout << "\nnhap so khack hang: ";
  cin >> n;
  y = new KH[n];
  for (int i = 0; i < n; i++) {
    y[i].nhap();
  }
}
void PHIEU::xuat() {
  cout << "\nCONG TY MEGA" << endl;
  cout << setw(40) << "\nPHIEU LUONG" << endl;
  cout << setw(5) << "ma phieu" << setw(10) << mp << setw(10)
       << "ngay lap: " << nl << endl;
  x.xuat();
  cout << "ma kh" << setw(15) << "ten khoan" << setw(20) << "so luong"
       << setw(15) << "tam ung" << setw(15) << "con lai" << endl;

  for (int i = 0; i < n; i++) {
    y[i].xuat();
  }
  int t = 0;
  for (int i = 0; i < n; i++) {
    t = t + y[i].sl - y[i].tu;
  }
  cout << setw(30) << "tong: " << setw(30) << t << endl;
}

void sua(PHIEU &a) { a.nl = "12/10/20"; }

void sx(PHIEU &a) {
  for (int i = 0; i < a.n; i++) {
    for (int j = i + 1; j < a.n; j++) {
      if (a.y[i].cl > a.y[j].cl) {
        KH tg;
        tg = a.y[i];
        a.y[i] = a.y[j];
        a.y[j] = tg;
      }
    }
  }
}
int main() {
  PHIEU a;
  a.nhap();
  a.xuat();
  sua(a);
  a.xuat();
  sx(a);
  a.xuat();
  return 0;
}
