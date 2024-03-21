#include <iostream>
using namespace std;

int main() {
    int thang;
    cout << "Nhập vào tháng: ";
    cin >> thang;

    switch (thang) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "\nThang co 31 ngày";
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "\nThang có 30 ngày";
        break;
    case 2:
        cout << "\nThang có 28 ngày";
        break;
    default:
        cout << "\nThang không hợp lệ!";
    }

    return 0;
}