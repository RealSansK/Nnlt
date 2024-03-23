#include <iostream>
using namespace std;

int main() {
    double x; // Số kilowatt sử dụng trong một tháng
    double cost = 0; // Biến lưu tổng tiền điện

    cout << "Nhập số kilowatt sử dụng trong một tháng(kW.h): ";
    cin >> x;
    if (x <= 100) {
        cost = x * 1242;
    }
         
        else if (x > 100 && x < 150) {
        cost =100* 1242 + (x-100) * 1369 ;}
        
         else if (x >= 150 && x <= 200) {
        cost =100* 1242 + 50 * 1369+(x-150) * 1734;}
        
        else if (x > 200) {
        cost = 100* 1242 + 50 * 1369+50 * 1734 +(x-200) * 1877;
        }



    cout << "Tiền điện cho " << x << " kWh là " << cost << " VNĐ" << endl;

    return 0;
}