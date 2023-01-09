#include <iostream>
#include <string>
using namespace std;
class TRUONG;
class KHOA {
private:
  string makhoa;
  string tenkhoa;
  friend class TRUONG;
  friend void In(TRUONG *a, int n);
};

class BAN {
private:
  string maban;
  string tenban;

public:
  void NHAP();
  void XUAT();
};

void BAN::NHAP() {
  cin.ignore();
  cout << "Ma ban: " << endl;
  getline(cin, maban);
  cout << "Ten ban: " << endl;
  getline(cin, tenban);
}

void BAN::XUAT() {
  cout << "Ma ban: " << maban << endl;
  cout << "Ten ban: " << tenban << endl;
}

class TRUONG {
private:
  KHOA x[100];
  int sk;
  BAN y[100];
  int sb;

public:
  void NHAP();
  void XUAT();
  friend void In(TRUONG *a, int n);
};

void TRUONG::NHAP() {
  cout << "Nhap so khoa: ";
  cin >> sk;
  cin.ignore();
  for (int i{0}; i < sk; i++) {
    cout << "Ma khoa: ";
    getline(cin, x[i].makhoa);
    cout << "Ten khoa";
    getline(cin, x[i].tenkhoa);
  }
  cout << "Nhap so ban: ";
  cin >> sb;
  for (int i{0}; i < sb; i++) {
    y[i].NHAP();
  }
}

void TRUONG::XUAT() {
  for (int i{0}; i < sk; i++) {
    cout << "Ma khoa: " << x[i].makhoa << endl;
    cout << "Ten khoa" << x[i].tenkhoa << endl;
  }
  for (int i{0}; i < sb; i++) {
    y[i].XUAT();
  }
}

void In(TRUONG a[100], int n) {
  for (int i{0}; i < n; i++) {
    int check{0};
    for (int j{0}; j < a[i].sk; j++) {
      if (a[i].x[j].tenkhoa.compare("CNTT") == 0) {
        check = 1;
      }
      if (a[i].sb > 3 || check == 1) {
        a[i].XUAT();
      }
    }
  }
}
int main() {
  TRUONG a[100];
  int n;
  cout << "n: ";
  cin >> n;
  for (int i{0}; i < n; i++) {
    a[i].NHAP();
  }

  In(a, n);
  return 0;
}
