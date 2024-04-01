#include <iostream>
using namespace std;

int main() {
    int a, n, result = 1;

    cout << "Nhap so nguyen duong a: ";
    cin >> a;

    cout << "Nhap so mu n: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        result *= a;
    }

    cout << "Ket qua cua " << a << "^" << n << " la: " << result << endl;

    return 0;
}
