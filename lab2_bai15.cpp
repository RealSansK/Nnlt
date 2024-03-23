#include <iostream>
using namespace std;

int main() {
    double income; 
    double taxRate = 0;
    double deduction = 0; 
    double incomeTax = 0; 
    int dependents; 

    cout << "Nhập thu nhập cá nhân hàng tháng (VND): ";
    cin >> income;

    cout << "Nhập số người phụ thuộc: ";
    cin >> dependents;

    
    if (dependents >= 5 && dependents <= 6) {
        deduction = 10000000; 
    } else {
        deduction = dependents * 1600000; 
    }


    if (income <= 4000000) {
        taxRate = 0;
    } else if (income <= 6000000) {
        taxRate = 0.05;
    } else if (income <= 9000000) {
        taxRate = 0.1;
    } else if (income <= 14000000) {
        taxRate = 0.15;
    } else if (income <= 24000000) {
        taxRate = 0.2;
    } else if (income <= 44000000) {
        taxRate = 0.25;
    } else if (income <= 84000000) {
        taxRate = 0.3;
    } else {
        taxRate = 0.35;
    }


    incomeTax = (income - deduction) * taxRate;

    cout << "Thu nhập cá nhân hàng tháng: " << income << " VND" << endl;
    cout << "Số người phụ thuộc: " << dependents << endl;
    cout << "Khoản khấu trừ: " << deduction << " VND" << endl;
    cout << "Thuế thu nhập cá nhân: " << incomeTax << " VND" << endl;

    return 0;
}
