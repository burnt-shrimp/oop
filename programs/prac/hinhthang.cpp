#include <iostream>

using namespace std;

class HinhThang {
private:
  double length;
  double width;
  double height;

public:
    void input(){
        cout << "nhap chieu dai: "; cin >> length;
        cout << "nhap chieu rong: "; cin >> width;
        cout << "nhap chieu cao: "; cin >> height;
    }
    void output(){
        cout << "chieu dai la: " << length << endl;
        cout << "chieu rong la: " << width << endl;
        cout << "chieu cao la: " << height << endl;
    }
    double area(){
        return (length + width)*height / 2;
    }
};


int main() { 
    HinhThang ht1;
    ht1.input();
    ht1.output();
    cout << "dien tich: " << ht1.area() << endl;

    return 0; 
}
