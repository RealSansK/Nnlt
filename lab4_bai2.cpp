#include <iostream>
using namespace std;


void nhanmatran(int matran1[][100], int matran2[][100], int result[][100], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < n; ++k) {
                result[i][j] += matran1[i][k] * matran2[k][j];
            }
        }
    }
}

int main() {
    int n;
    cout << "Nhap kich thuoc ma tran: ";
    cin >> n;

    int matran1[100][100], matran2[100][100], result[100][100];
    cout << "Nhap cac phan tu cua ma tran 1:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matran1[i][j];
        }
    }

    cout << "Nhap cac phan tu cua ma tran 2:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matran2[i][j];
        }
    }

    nhanmatran(matran1, matran2, result, n);


    cout << "Ma tran ket qua:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
