#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class hangHoa {
private:
  string maHang, tenHang;
  double donGia;
  int soLuong;

public:
  void input();
  void output();
  friend void nhapds(hangHoa *, int);
  friend void xuatds(hangHoa *, int);
};

void hangHoa::input() {
  cin.ignore();
  cout << "Nhap ma hang: " << endl;
  getline(cin, maHang);
  cout << "Nhap ten hang: " << endl;
  getline(cin, tenHang);
  cout << "Nhap don gia: " << endl;
  cin >> donGia;
  cout << "Nhap so luong: " << endl;
  cin >> soLuong;
}

void hangHoa::output() {
  cout << setw(15) << maHang;
  cout << setw(15) << tenHang;
  cout << setw(15) << donGia;
  cout << setw(15) << soLuong;
  cout << setw(15) << donGia * soLuong << endl;
}

void nhapds(hangHoa *x, int n) {
  for (int i = 0; i < n; i++) {
    cout << "Nhap mat hang thu " << i + 1 << endl;
    x[i].input();
  }
}

void xuatds(hangHoa *x, int n) {
  double sum = 0;
  cout << setw(15) << "ma hang";
  cout << setw(15) << "ten hang";
  cout << setw(15) << "don gia";
  cout << setw(15) << "so luong";
  cout << setw(15) << "thanh tien" << endl;
  for (int i = 0; i < n; i++) {
    x[i].output();
    sum += x[i].soLuong * x[i].donGia;
  }
  cout << "tong tien: \t" << sum << endl;
}
int main() {
  hangHoa *ds;
  int n;
  cout << "Nhap so luong hang hoa: ";
  cin >> n;
  ds = new hangHoa[n];
  nhapds(ds, n);
  xuatds(ds, n);
  delete[] ds;
  return 0;
}
