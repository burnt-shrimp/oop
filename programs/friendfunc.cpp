#include <iostream>
#include <iomanip>
using namespace std;

class SinhVien {
  private:
    int maSV;
    string hoTen;
    float diemT, diemL, diemH;
    public:
    void nhap();
    void xuat();
    friend void nhapds(SinhVien *x, int n);
    friend void xuatds(SinhVien *x, int n);
    friend void sapxep(SinhVien *x, int n);
};

void

int main(){
  return 0;
}
