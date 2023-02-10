#include <bits/stdc++.h>
#include <cstdio>
#include <string>
using namespace std;

class PERSON {
protected:
  string hoTen;
  int ngaySinh;
  string queQuan;
};

class KYSU : public PERSON {
  string nganh;
  int namTN;

public:
  void nhap();
  void xuat();
  friend void in_namtn(KYSU *ks, int n);
};

void KYSU::nhap() {
  cout << "nhap ho ten: ";
  fflush(stdin);
  getline(cin, hoTen);
  cout << "nhap ngay sinh: ";
  cin >> ngaySinh;
  cin.ignore();
  cout << "nhap que quan: ";
  fflush(stdin);
  getline(cin, queQuan);
  cout << "nhap nganh: ";
  fflush(stdin);
  getline(cin, nganh);
  cout << "nhap nam tot nghiep: ";
  cin >> namTN;
  cin.ignore();
}
void KYSU::xuat() {
  cout << setw(15) << hoTen;
  cout << setw(15) << ngaySinh;
  cout << setw(15) << queQuan;
  cout << setw(15) << nganh;
  cout << setw(15) << namTN << endl;
}

void in_namtn(KYSU *ks, int n) {
  int max = ks[0].namTN;
  cout << "danh sach ky su tot nghiep gan day " << endl;
  for (int i = 0; i < n; i++) {
    if (max < ks[i].namTN) {
      max = ks[i].namTN;
    }
  }

  for (int i = 0; i < n; i++) {
    if (max == ks[i].namTN) {
      ks[i].xuat();
    }
  }
}
int main() {
  KYSU *ks;
  int n;

  do {
    cout << "nhap so ky su: ";
    cin >> n;
  } while (n < 0);
  ks = new KYSU[n];

  for (int i = 0; i < n; i++) {
    ks[i].nhap();
  }

  cout << setw(15) << "ho ten";
  cout << setw(15) << "ngay sinh";
  cout << setw(15) << "que quan";
  cout << setw(15) << "nganh";
  cout << setw(15) << "nam TN" << endl;

  for (int i = 0; i < n; i++) {
    ks[i].xuat();
  }

  in_namtn(ks, n);
  return 0;
}
