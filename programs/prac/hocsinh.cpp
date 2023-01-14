#include <iostream>
#include <string>
using namespace std;

class HocSinh {
private:
  string name;
  int math, physic, chem;

public:
  HocSinh() : name{""}, math{0}, physic{0}, chem{0} {}
  HocSinh(string n, int m, int p, int c)
      : name{n}, math{m}, physic{p}, chem{c} {}
  void output() {
    cout << "ten: " << name << endl;
    cout << "toan: " << math << endl;
    cout << "ly: " << physic << endl;
    cout << "hoa: " << chem << endl;
  }
};
int main() {
  HocSinh hs1, hs2("John", 2, 5, 6);
  hs1.output();
  cout << endl;
  hs2.output();
  return 0;
}
