#include <iostream>
#include<math.h>
using namespace std;

double calculateSum(int N) {
    double S = 1.0; // Khởi tạo S với giá trị đầu tiên của chuỗi
    for (int i = 1; i <= N; ++i) {
        S += pow(-1, i) * (1.0 / (i * (i + 1)));
    }
    return S;
}

int main() {
    int N;
    cout << "Nhap so nguyen duong N: ";
    cin >> N;
    
    if (N > 0) {
        double sum = calculateSum(N);
        cout << "Tong S la: " << sum << endl;
    } else {
        cout << "Vui long nhap mot so nguyen duong." << endl;
    }
    
    return 0;
}