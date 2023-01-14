#include <iostream>
#include <string>
using namespace std;

class HS {
  string Hoten;
  int Tuoi;
  double Toan;
  double Ly;
  double Hoa;

public:
  HS() {
    Hoten = "none";
    Tuoi = 1;
    Toan = 1;
    Ly = 1;
    Hoa = 1;
  };
  HS(string ht, int tuoi, double toan, double ly, double hoa) {
    Hoten = ht;
    Tuoi = tuoi;
    Toan = toan;
    Ly = ly;
    Hoa = hoa;
  };
  void xuat() {
    cout << "hoten: " << Hoten << endl;
    cout << "tuoi: " << Tuoi << endl;
    cout << "toan: " << Toan << endl;
    cout << "ly: " << Ly << endl;
    cout << "hoa: " << Hoa << endl;
  }
};
int main() {
  HS hs1;
  hs1.xuat();
  HS hs2("asdlkf", 15, 3, 5, 7);
  hs2.xuat();
  return 0;
}
