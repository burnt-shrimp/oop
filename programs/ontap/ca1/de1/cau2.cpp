#include <bits/stdc++.h>
#include <cstdio>
#include <fstream>
#include <string.h>
using namespace std;

class STR {
  char a[100];

public:
  void nhap() {
    cout << "nhap chuoi: ";
    fflush(stdin);
    cin.getline(a, 100);
  }

  void hien_thi() { cout << a << endl; }
};
int main() {
  STR a;
  return 0;
}
