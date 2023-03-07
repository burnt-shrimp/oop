#include <bits/stdc++.h>
using namespace std;
class MAYIN;

class NSX {
  string tenNSX;
  string diaChi;

public:
  friend class MAYIN;
};

class DATE {
  int d, m, y;

public:
  friend class MAYIN;
  friend void in_2019(MAYIN *a, int n);
};

class SP {
protected:
  string nhanHieu;
  NSX x;
  long giaThanh;
  DATE y;
};

class MAYIN : public SP {
  int tocDo;
  int doPhanGiai;

public:
  void nhap();
  void xuat();
  friend void in_2019(MAYIN *a, int n);
};

void MAYIN::nhap() {
  cout << "\nnhap nhan hieu: ";
  fflush(stdin);
  getline(cin, nhanHieu);
  cout << "\nnhap ten nsx: ";
  fflush(stdin);
  getline(cin, x.tenNSX);
  cout << "\nnhap dia chi: ";
  fflush(stdin);
  getline(cin, x.diaChi);
  cout << "\nnhap gia thanh: ";
  cin >> giaThanh;
  cout << "\nnhap ngay: ";
  cin >> y.d;
  cout << "\nnhap thang: ";
  cin >> y.m;
  cout << "\nnhap nam: ";
  cin >> y.y;
  cout << "\nnhap toc do: ";
  cin >> tocDo;
  cout << "\nnhap do phan giai: ";
  cin >> doPhanGiai;
}
void MAYIN::xuat() {
  cout << setw(15) << nhanHieu;
  cout << setw(15) << x.tenNSX;
  cout << setw(15) << x.diaChi;
  cout << setw(15) << giaThanh;
  cout << setw(15) << y.d << "/" << y.m << "/" << y.y;
  cout << setw(15) << tocDo;
  cout << setw(15) << doPhanGiai << endl;
}

void in_2019(MAYIN *a, int n) {
  for (int i = 0; i < n; i++) {
    if (a[i].y.y == 2019) {
      a[i].xuat();
    }
  }
}
int main() {
  MAYIN *a;
  int n;

  do {
    cout << "nhap so may in: ";
    cin >> n;
  } while (n <= 0);
  a = new MAYIN[n];

  for (int i = 0; i < n; i++) {
    cout << "\nmay in thu " << i + 1 << endl;
    a[i].nhap();
  }
  cout << "\n===================danh sach may in===================" << endl;
  cout << setw(15) << "nhan hieu";
  cout << setw(15) << "ten nsx";
  cout << setw(15) << "dia chi";
  cout << setw(15) << "gia thanh";
  cout << setw(15) << "ngay";
  cout << setw(15) << "toc do";
  cout << setw(15) << "do phan giai" << endl;

  for (int i = 0; i < n; i++) {
    a[i].xuat();
  }

  cout << "\n=====================SXN 2019======================" << endl;
  in_2019(a, n);
  return 0;
}
