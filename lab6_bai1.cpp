#include<iostream>
#include<string>
using namespace std;

int main() {
    string chuoiBanDau ;
    string chuoiChiDinh ;
    cout << " Nhập chuỗi ban đầu: ";
    cin >> chuoiBanDau;
    cout << " Nhập chuỗi sau đầu: ";
    cin >> chuoiChiDinh;
    for (int i = 0; i < chuoiChiDinh.length(); i++) {
        chuoiBanDau += chuoiChiDinh[i];
    }

    cout << "Chuỗi sau khi nối: " << chuoiBanDau << endl;

    return 0;
}
