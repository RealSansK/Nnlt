#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    cout << "Nhập độ dài cạnh a: ";
    cin >> a;
    cout << "Nhập độ dài cạnh b: ";
    cin >> b;
    cout << "Nhập độ dài cạnh c: ";
    cin >> c;

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            cout << "Ba cạnh này tạo thành một tam giác đều." << endl;
        } else if (a == b || b == c || a == c) {
            cout << "Ba cạnh này tạo thành một tam giác cân." << endl;
        } else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            cout << "Ba cạnh này tạo thành một tam giác vuông." << endl;
        } else {
            cout << "Ba cạnh này tạo thành một tam giác thường." << endl;
        }
    } else {
        cout << "Ba cạnh này không tạo thành một tam giác." << endl;
    }

    return 0;
}