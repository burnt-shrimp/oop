#include <iostream>
#include <string>
using namespace std;

class SinhVien {
  string MaSV;
  string HoTen;
  int Tuoi;
  double Diem;

public:
  void nhap();
  void xuat();
};

void SinhVien::nhap(){
    cout << "Nhap ma sinh vien: "; fflush(stdin); getline(cin, MaSV);
    cout << "Nhap ten sinh vien: "; fflush(stdin); getline(cin, HoTen);
    cout << "Nhap tuoi: "; cin >> Tuoi;
    cout << "Nhap diem: "; cin >> Diem;
}

void SinhVien::xuat(){
    cout << "Ma sinh vien: " << MaSV << endl;
    cout << "Ho ten sv: " << HoTen << endl;
    cout << "Tuoi: " << Tuoi << endl;
    cout << "Diem: " << Diem << endl;
}
int main() { 
    SinhVien a, b;
    a.nhap();
    cout << endl;
    cin.ignore();
    b.nhap();
    cout << endl;
    a.xuat();
    cout << endl;
    b.xuat();
    return 0; }
