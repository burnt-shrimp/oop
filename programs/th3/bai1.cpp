#include <bits/stdc++.h>
#include <cstdio>
#include <string>
using namespace std;

class SV {
  string maSV;
  string hoTen;
  double diemToan;
  double diemLy;
  double diemHoa;

public:
  void nhap();
  void xuat();
  friend void sx_sv(SV *a, int n);
};

void SV::nhap() {
  cout << "Nhap ma sv: ";
  fflush(stdin);
  getline(cin, maSV);
  cout << "Nhap ten sv: ";
  fflush(stdin);
  getline(cin, hoTen);
  cout << "Nhap diem toan: ";
  cin >> diemToan;
  cout << "Nhap diem ly: ";
  cin >> diemLy;
  cout << "Nhap diem hoa: ";
  cin >> diemHoa;
}

void SV::xuat() {
  cout << setw(15) << maSV;
  cout << setw(15) << hoTen;
  cout << setw(15) << diemToan;
  cout << setw(15) << diemLy;
  cout << setw(15) << diemHoa;
  cout << setw(15) << diemToan + diemLy + diemHoa << endl;
}

void sx_sv(SV *a, int n) {
  for (int i{0}; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if ((a[i].diemToan + a[i].diemLy + a[i].diemHoa) >
          (a[j].diemToan + a[j].diemLy + a[j].diemHoa)) {
        SV temp;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
}

int main() {
  SV *a;
  int n;
  do {
    cout << "Nhap so luong sv: ";
    cin >> n;
  } while (n < 0);

  a = new SV[n];

  for (int i{0}; i < n; i++) {
    cout << "nhap sv thu " << i << endl;
    cin.ignore();
    a[i].nhap();
  }

  cout << "============DANH SACH SINH VIEN==========" << endl;
  cout << setw(15) << "ma sv";
  cout << setw(15) << "ho ten";
  cout << setw(15) << "diem toan";
  cout << setw(15) << "diem ly";
  cout << setw(15) << "diem hoa";
  cout << setw(15) << "tong diem" << endl;
  for (int i{0}; i < n; i++) {
    a[i].xuat();
  }

  cout << "\ndanh sach sau khi sap xep" << endl;
  cout << "============DANH SACH SINH VIEN==========" << endl;
  cout << setw(15) << "ma sv";
  cout << setw(15) << "ho ten";
  cout << setw(15) << "diem toan";
  cout << setw(15) << "diem ly";
  cout << setw(15) << "diem hoa";
  cout << setw(15) << "tong diem" << endl;
  sx_sv(a, n);
  for (int i{0}; i < n; i++) {
    a[i].xuat();
  }

  delete[] a;
  return 0;
}
