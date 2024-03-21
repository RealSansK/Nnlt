#include <iostream>
using namespace std;

int main() {
    float inch, m;
    const float inchToCm = 2.54;

    cout << "Nhập inch: ";
    cin >> inch;

    m = inch * inchToCm/100;
    cout << "Tương ứng " << inch << " inch là " << m << " mét." << endl;

    cout << "Nhập m: ";
    cin >> m;
    inch = m / inchToCm;
    cout << "Tương ứng " << m << " mét là " << inch << " inch." << endl;

    return 0;
}