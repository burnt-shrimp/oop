#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

class NS{
    protected:
        string ht;
        int d, m, y;
        string gt;
    public:
        void nhap();
        void xuat();
};

void NS::nhap(){
    cout << "\nnhap ho ten: ";
    fflush(stdin);
    getline(cin, ht);
    cout << "\nnhap ngay sinh: ";
    cin >> d;
    cout << "\nnhap thang sinh: ";
    cin >> m;
    cout << "\nnhap nam sinh: ";
    cin >> y;
    cout << "\nnhap gioi tinh: ";
    fflush(stdin);
    getline(cin, gt);
}

void NS::xuat(){
    cout << "ho ten: " << ht << endl;
    cout << "ngay sinh: " << d << "/" << m << "/" << y << endl;
    cout << "gioi tinh: " << gt << endl;
}

class NV: public NS{
    string pb;
    string dc;
    double hsl;
    double hspc;
    double gtru;
    public:
        void nhap();
        void xuat();
        friend void sua(NV *a);
};

void NV::nhap(){
    NS::nhap();
    cout << "\nnhap phong ban: "; fflush(stdin); getline(cin, pb);
    cout << "\nnhap he so luong: "; cin >> hsl;
    cout << "\nnhap he phu cap: "; cin >> hspc;
    cout << "\nnhap giam tru: "; cin >> gtru;
}

void NV::xuat(){
    NS::xuat();
    cout << "phong ban: " << pb << endl;
    cout << "he so luong: " << hsl << endl;
    cout << "he so phu cap: " << hspc << endl;
    cout << "giam tru: " << gtru << endl;
}

void sua(NV *a){

}
int main(){
    NV *a;
    int n;
    do{
        cout << "nhap so nhan vien: "; cin >> n;
    }while(n <= 0);

    a = new NV[n];
    for(int i=0;i<n;i++){
        cout << "\nnhan vien thu " << i+1 << endl;
        a[i].nhap();
    }

    for(int i=0;i<n;i++){
        cout << "\nnhan vien thu " << i+1 << endl;
        a[i].xuat();
    }
    return 0;
}
