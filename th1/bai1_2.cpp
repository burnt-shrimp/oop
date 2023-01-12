#include <iostream>
using namespace std;

class HCN {
  double dai;
  double rong;

public:
  void nhap();
  void VE();
  double DT();
  double CV();
};

void HCN::nhap() {
  cout << "Nhap chieu dai: ";
  cin >> dai;
  cout << "Nhap chieu rong: ";
  cin >> rong;
}

void HCN::VE() {
  cout << endl;
  for (int i = 1; i <= rong; i++) {
    for (int j = 1; j <= dai; j++) {
      cout << "*";
    }
    cout << "\n";
  }
}

double HCN::DT() { return dai * rong; }

double HCN::CV() { return (dai + rong) * 2; }
int main() {
  HCN a;
  a.nhap();
  a.VE();
  cout << endl;
  cout << "dien tich: " << a.DT() << endl;
  cout << "chu vi: " << a.CV() << endl;
  return 0;
}
