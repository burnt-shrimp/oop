#include <bits/stdc++.h>
using namespace std;

class TRUONGDH;
class KHOA {
  string maKhoa;
  string tenKhoa;
  string truongKhoa;

public:
  friend class TRUONGDH;
  friend void xoa_tt(TRUONGDH &a);
};

class BAN {
  string maBan;
  string tenBan;
  int ngayTL;

public:
  friend class TRUONGDH;
};

class TRUONG {
protected:
  string maTruong;
  string tenTruong;
  string diaChi;

public:
  void nhap();
  void xuat();
};

void TRUONG::nhap() {
  cout << "nhap ma truong: ";
  fflush(stdin);
  getline(cin, maTruong);
  cout << "nhap ten truong: ";
  fflush(stdin);
  getline(cin, tenTruong);
  cout << "nhap dia chi truong: ";
  fflush(stdin);
  getline(cin, diaChi);
}
void TRUONG::xuat() {
  cout << "ma truong: " << maTruong << endl;
  cout << "ten truong: " << tenTruong << endl;
  cout << "dia chi: " << diaChi << endl;
}

class TRUONGDH : public TRUONG {
  KHOA *x;
  int n;
  BAN *y;
  int m;

public:
  void nhap();
  void xuat();
  friend void xoa_tt(TRUONGDH &a);
};

void TRUONGDH::nhap() {
  TRUONG::nhap();
  do {
    cout << "nhap so khoa: ";
    cin >> n;
  } while (n <= 0);
  x = new KHOA[n];
  for (int i = 0; i < n; i++) {
    cout << "nhap khoa thu " << i + 1 << endl;
    cout << "nhap ma khoa: ";
    fflush(stdin);
    getline(cin, x[i].maKhoa);
    cout << "nhap ten khoa: ";
    fflush(stdin);
    getline(cin, x[i].tenKhoa);
    cout << "nhap truong khoa: ";
    fflush(stdin);
    getline(cin, x[i].truongKhoa);
  }

  do {
    cout << "nhap so ban: ";
    cin >> m;
  } while (m <= 0);
  y = new BAN[m];
  for (int i = 0; i < m; i++) {
    cout << "nhap ban thu " << i + 1 << endl;
    cout << "nhap ma ban: ";
    fflush(stdin);
    getline(cin, y[i].maBan);
    cout << "nhap ten ban: ";
    fflush(stdin);
    getline(cin, y[i].tenBan);
    cout << "nhap ngay thanh lap: ";
    cin >> y[i].ngayTL;
  }
}
void TRUONGDH::xuat() {
  TRUONG::xuat();
  cout << setw(20) << "ma khoa";
  cout << setw(20) << "ten khoa";
  cout << setw(20) << "ten truong khoa" << endl;
  for (int i = 0; i < n; i++) {
    cout << setw(20) << x[i].maKhoa;
    cout << setw(20) << x[i].tenKhoa;
    cout << setw(20) << x[i].truongKhoa << endl;
  }

  cout << endl;
  cout << setw(20) << "ma ban";
  cout << setw(20) << "ten ban";
  cout << setw(20) << "ngay thanh lap\n";
  for (int i = 0; i < m; i++) {
    cout << setw(20) << y[i].maBan;
    cout << setw(20) << y[i].tenBan;
    cout << setw(20) << y[i].ngayTL << endl;
  }
}

void xoa_tt(TRUONGDH &a) {
  for (int i = 0; i < a.n; i++) {
    if (a.x[i].maKhoa.compare("KH01") == 0) {
      for (int j = i; j < a.n - 1; j++) {
        a.x[j] = a.x[j + 1];
      }
    }
    a.n--;
  }
}
int main() {
  TRUONGDH a;

  cout << "nhap thong tin truong a: \n";
  a.nhap();
  cout << "\nthong tin vua nhap\n";
  a.xuat();
  xoa_tt(a);
  cout << "thong tin sau khi xoa ma khoa KH01" << endl;
  a.xuat();
  return 0;
}
