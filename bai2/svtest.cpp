#include <iostream>
#include <string>
using namespace std;

class SINHVIEN {
private:
  string MSV;
  string HOTEN;
  int TUOI;
  double DIEM;

public:
  void NHAP();
  void XUAT();
};

void SINHVIEN::NHAP() {
  cin.ignore();
  cout << "MSV: " << endl;
  getline(cin, MSV);
  cout << "Ho ten: " << endl;
  getline(cin, HOTEN);
  cout << "Tuoi: ";
  cin >> TUOI;
  cout << "Diem: ";
  cin >> DIEM;
}
void SINHVIEN::XUAT() {
    cout << "MSV: " << MSV << endl;
    cout << "Ho ten: " << HOTEN << endl;
    cout << "Tuoi: " << TUOI << endl;
    cout << "Diem: " << DIEM << endl;
}
int main() { return 0; }
