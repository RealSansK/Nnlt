#include <iostream>
using namespace std;

// Hàm tính ma trận chuyển vị
void chuyen_vi(int matran[][100], int n) {
    int temp[100][100];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            temp[j][i] = matran[i][j];
        }
    }

    // In ma trận chuyển vị
    cout << "Ma tran chuyen vi:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << temp[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Nhap kich thuoc ma tran: ";
    cin >> n;

    int matran[100][100];
    cout << "Nhap cac phan tu cua ma tran:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matran[i][j];
        }
    }

    chuyen_vi(matran, n);

    return 0;
}
