#include <bits/stdc++.h>
#include <cstdio>
#include <string>
using namespace std;

class TS {
  string tenTS;
  int soLuong;
  string tinhTrang;

public:
  void nhap();
  void xuat();
  friend class PHIEU;
};

void TS::nhap() {
  cout << "nhap ten ts: ";
  fflush(stdin);
  getline(cin, tenTS);
  cout << "nhap so luong: ";
  cin >> soLuong;
  cin.ignore();
  cout << "nhap tinh trang: ";
  fflush(stdin);
  getline(cin, tinhTrang);
}

void TS::xuat() {
  cout << setw(15) << tenTS;
  cout << setw(15) << soLuong;
  cout << setw(15) << tinhTrang << endl;
}

class DATE {
  int d, m, y;

public:
  void nhap();
  void xuat();
};

void DATE::nhap() {
  cout << "nhap ngay: ";
  cin >> d >> m >> y;
}
void DATE::xuat() { cout << d << "/" << m << "/" << y << endl; }

class PHIEU {
  string maP;
  DATE ngayKK;
  string nvKK;
  string chucVu;
  string phong;
  string maPhong;
  string truongPhong;
  TS *ts;
  int n;

public:
  void nhap();
  void xuat();
  void sua_maytinh();
  void sx_ts();
};

void PHIEU::nhap() {
  cout << "nhap ma phieu: ";
  fflush(stdin);
  getline(cin, maP);
  ngayKK.nhap();
  cin.ignore();
  cout << "nhap nhan vien kiem ke: ";
  fflush(stdin);
  getline(cin, nvKK);
  cout << "nhap chuc vu: ";
  fflush(stdin);
  getline(cin, chucVu);
  cout << "nhap phong: ";
  fflush(stdin);
  getline(cin, phong);
  cout << "nhap ma phong: ";
  fflush(stdin);
  getline(cin, maPhong);
  cout << "nhap truong phong: ";
  fflush(stdin);
  getline(cin, truongPhong);

  do {
    cout << "nhap so loai tai san: ";
    cin >> n;
  } while (n < 0);

  ts = new TS[n];
  cin.ignore();
  for (int i = 0; i < n; i++) {
    ts[i].nhap();
  }
}
void PHIEU::xuat() {
  int demts = 0;
  int slts = 0;

  cout << "\n==================phieu kiem ke tai san===============" << endl;
  cout << "ma phieu: " << maP << setw(20) << "Ngay kiem ke: ";
  ngayKK.xuat();

  cout << "nhan vien kiem ke: " << nvKK << setw(20) << "chuc vu: " << chucVu
       << endl;
  cout << "kiem ke tai phong: " << phong << setw(20) << "ma phong: " << maPhong
       << endl;
  cout << "truong phong: " << truongPhong << endl;

  cout << setw(15) << "ten tai san";
  cout << setw(15) << "so luong";
  cout << setw(15) << "tinh trang" << endl;

  for (int i = 0; i < n; i++) {
    ts[i].xuat();
    demts++;
  }

  for (int i = 0; i < n; i++) {
    slts += ts[i].soLuong;
  }
  cout << "so tai san da kiem ke: " << demts << setw(20)
       << "Tong so luong: " << slts << endl;
}

void PHIEU::sua_maytinh() {
  for (int i = 0; i < n; i++) {
    if (ts[i].tenTS.compare("may vi tinh") == 0) {
      ts[i].soLuong = 20;
    }
  }
}

void PHIEU::sx_ts() {
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (ts[i].soLuong > ts[j].soLuong) {
        TS temp;
        temp = ts[i];
        ts[i]= ts[j];
        ts[j]= temp;
      }
    }
  }
}
int main() {
  PHIEU p;
  p.nhap();
  p.xuat();
  p.sua_maytinh();
  p.xuat();

  p.sx_ts();
  p.xuat();

  return 0;
}
