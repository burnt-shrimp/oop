#include <bits/stdc++.h>
#include <cstdio>
#include <string>
using namespace std;

class PRINTER {
protected:
  double trongLuong;
  string hangSX;
  int namSX;
  long tocDo;
};

class DOTPRINTER : public PRINTER {
  long matDoKim;

public:
  void nhap();
  void xuat();
};

void DOTPRINTER::nhap() {
  cout << "nhap trong luong may dotprinter: ";
  cin >> trongLuong;
  cin.ignore();
  cout << "nhap hang sx: ";
  fflush(stdin);
  getline(cin, hangSX);
  cout << "nhap nam sx: ";
  cin >> namSX;
  cout << "nhap toc do kim: ";
  cin >> tocDo;
  cout << "nhap mat do kim: ";
  cin >> matDoKim;
}

void DOTPRINTER::xuat() {
  cout << "thong tin may dotpritner" << endl;
  cout << setw(15) << "trong luong";
  cout << setw(15) << "hang sx";
  cout << setw(15) << "nam sx";
  cout << setw(15) << "toc do";
  cout << setw(15) << "mat do kim" << endl;

  cout << setw(15) << trongLuong;
  cout << setw(15) << hangSX;
  cout << setw(15) << namSX;
  cout << setw(15) << tocDo;
  cout << setw(15) << matDoKim << endl;
}

class LASERPRINTER : public PRINTER {
  long doPhanGiai;

public:
  void nhap();
  void xuat();
};

void LASERPRINTER::nhap() {
  cout << "nhap trong luong may laserprinter: ";
  cin >> trongLuong;
  cin.ignore();
  cout << "nhap hang sx: ";
  fflush(stdin);
  getline(cin, hangSX);
  cout << "nhap nam sx: ";
  cin >> namSX;
  cout << "nhap toc do kim: ";
  cin >> tocDo;
  cout << "nhap do phan giai: ";
  cin >> doPhanGiai;
}

void LASERPRINTER::xuat() {
  cout << "\nthong tin may laser" << endl;
  cout << setw(15) << "trong luong";
  cout << setw(15) << "hang sx";
  cout << setw(15) << "nam sx";
  cout << setw(15) << "toc do";
  cout << setw(15) << "do phan giai" << endl;

  cout << setw(15) << trongLuong;
  cout << setw(15) << hangSX;
  cout << setw(15) << namSX;
  cout << setw(15) << tocDo;
  cout << setw(15) << doPhanGiai << endl;
}
int main() { 

    DOTPRINTER a;
    LASERPRINTER b;

    a.nhap();
    a.xuat();

    b.nhap();
    b.xuat();

    return 0; }
