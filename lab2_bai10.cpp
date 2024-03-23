#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Nhập một năm: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        cout << year << " là một năm nhuận." << endl;
    } else {
        cout << year << " không phải là năm nhuận." << endl;
    }

    return 0;
}