#include <iostream>
using namespace std;

bool laSoNguyenTo(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Nhap vao so nguyen n: ";
    cin >> n;

    if (laSoNguyenTo(n)) {
        cout << n << " la so nguyen to." << endl;
    } else {
        cout << n << " khong phai la so nguyen to." << endl;
    }

    return 0;
}
