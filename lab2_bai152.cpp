#include <iostream>
using namespace std;

int main() {
    
    long long thuNhap, thuNhapChiuThue, soNguoiPhuThuoc;
    long long thuePhaiNop = 0;
    const long long giamTruBanThan = 4000000;
    const long long giamTruNguoiPhuThuoc = 1600000;
    const long long giamTruToiDa = 10000000;

    
    cout << "Nhap thu nhap hang thang (VND): ";
    cin >> thuNhap;
    cout << "Nhap so nguoi phu thuoc: ";
    cin >> soNguoiPhuThuoc;

    
    thuNhapChiuThue = thuNhap - giamTruBanThan - (soNguoiPhuThuoc * giamTruNguoiPhuThuoc);
    if (thuNhapChiuThue < 0) thuNhapChiuThue = 0;

    
    if (soNguoiPhuThuoc * giamTruNguoiPhuThuoc > giamTruToiDa) {
        thuNhapChiuThue += (soNguoiPhuThuoc * giamTruNguoiPhuThuoc) - giamTruToiDa;
    }

    
    if (thuNhapChiuThue > 84000000) {
        thuePhaiNop += (thuNhapChiuThue - 84000000) * 35 / 100;
        thuNhapChiuThue = 84000000;
    }
    if (thuNhapChiuThue > 44000000) {
        thuePhaiNop += (thuNhapChiuThue - 44000000) * 30 / 100;
        thuNhapChiuThue = 44000000;
    }
    cout << "Thuế thu nhập cá nhân phải nộp là: " << thuePhaiNop << " VND" << endl;

    return 0;
}
