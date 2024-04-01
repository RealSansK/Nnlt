#include <iostream>
using namespace std;

// Hàm tìm ký tự xuất hiện i lần trong chuỗi
char tim_ky_tu(char* chuoi, int i) {
    int dem = 0;
    int len = strlen(chuoi);

    // Kiểm tra tính hợp lệ của i
    if (i <= 0 || i > len) {
        cout << "!" << endl;
        return '!';
    }

    // Tìm ký tự xuất hiện i lần
    for (int j = 0; j < len; ++j) {
        if (chuoi[j] == chuoi[i - 1]) {
            ++dem;
            if (dem == i) {
                cout << "Ky tu '" << chuoi[i - 1] << "' xuat hien " << i << " lan" << endl;
                return chuoi[i - 1];
            }
        }
    }

    cout << "Ky tu '!' (khong tim thay)" << endl;
    return '!';
}

int main() {
    char chuoi[100];
    int i;

    cout << "Nhap chuoi: ";
    cin >> chuoi;

    cout << "Nhap i: ";
    cin >> i;

    tim_ky_tu(chuoi, i);

    return 0;
}
