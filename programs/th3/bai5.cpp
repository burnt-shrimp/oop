#include <bits/stdc++.h>
#include <cstdio>
#include <string>
using namespace std;

class ARR {
  int *a;
  int n;

public:
  ARR();
  ARR(int n);
  ~ARR();
  void nhap();
  void xuat();
};

ARR::ARR() {
  a = nullptr;
  n = 0;
}

ARR::ARR(int n) {
  this->n = n;
  a = new int[n];
  for (int i = 0; i < n; i++) {
    a[i] = 10;
  }
}

ARR::~ARR() {
  n = 0;
  delete[] a;
}

void ARR::nhap() {
  do {
    cout << "Nhap n: ";
    cin >> n;
  } while (n < 0);
  a = new int[n];
  for (int i = 0; i < n; i++) {
    cout << "a[" << i << "]= ";
    cin >> a[i];
  }
}
void ARR::xuat() {
  for (int i = 0; i < n; i++) {
    cout << a[i] << "\t";
  }
  cout << endl;
}
int main() {
  ARR a(10);
  a.xuat();

  ARR b;
  b.nhap();
  b.xuat();

  return 0;
}
