#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class ARR {
  int *a;
  int n;

public:
  void nhap();
  void xuat();
  void sap_xep();
};

void ARR::nhap() {
  cout << "Nhap so phan tu mang: ";
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << "a[" << i << "] = ";
    cin >> a[i];
  }
}

void ARR::xuat() {
  for (int i = 0; i < n; i++) {
    cout << a[i] << "\t";
  }
}
void ARR::sap_xep() {
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (a[i] > a[j]) {
        swap(a[i], a[j]);
      }
    }
  }
}

void swap(int &x, int &y) {
  int temp;
  temp = x;
  x = y;
  y = temp;
}
int main() {
  ARR arr;
  arr.nhap();
  cout << "\nmang vua nhap la: " << endl;
  arr.xuat();
  arr.sap_xep();
  cout << "\nmang sau khi sap xep la: " << endl;
  arr.xuat();
  return 0;
}
