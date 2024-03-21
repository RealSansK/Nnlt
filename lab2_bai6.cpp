#include <iostream>
using namespace std;

int main() {
    int birthYear, currentYear = 1999;
    cout << "Nhập năm sinh của bạn (1901-1999): ";
    cin >> birthYear;

    // Kiểm tra năm sinh hợp lệ
    if (birthYear < 1901 || birthYear > 1999) {
        cout << "Năm sinh không hợp lệ. Vui lòng nhập lại trong khoảng từ 1901 đến 1999." << endl;
        return 1;
    }

    // Tính số lần sinh nhật
    int age = currentYear - birthYear;
    cout << "Bạn đã có " << age << " lần sinh nhật." << endl;

    return 0;
}