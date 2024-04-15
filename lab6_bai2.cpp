#include<iostream>
#include<string>
using namespace std;

int main() {
    string chuoi;
    char kyTu;
    cout << "Nhập chuỗi: ";
    getline(cin, chuoi);
    cout << "Nhập ký tự cần tìm: ";
    cin >> kyTu;

    int viTriCuoi = -1;

    for (int i = 0; i < chuoi.length(); i++) {
        if (chuoi[i] == kyTu) {
            viTriCuoi = i;
        }
    }

    if (viTriCuoi != -1) {
        cout << "Vị trí cuối cùng của ký tự '" << kyTu << "' trong chuỗi là: " << viTriCuoi << endl;
    }
    else {
        cout << "Ký tự '" << kyTu << "' không xuất hiện trong chuỗi." << endl;
    }

    return 0;
}
