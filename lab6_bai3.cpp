#include<iostream>
#include<string>
using namespace std;

int soSanhChuoi(string chuoi1, string chuoi2) {
    int len1 = chuoi1.length();
    int len2 = chuoi2.length();

    for (int i = 0; i < len1 && i < len2; i++) {
        if (chuoi1[i] < chuoi2[i]) {
            return -1;
        }
        else if (chuoi1[i] > chuoi2[i]) {
            return 1;
        }
    }

    if (len1 < len2) {
        return -1;
    }
    else if (len1 > len2) {
        return 1;
    }

    return 0;
}

int main() {
    string chuoi1, chuoi2;
    cout << "Nhập chuỗi thứ nhất: ";
    getline(cin, chuoi1);
    cout << "Nhập chuỗi thứ hai: ";
    getline(cin, chuoi2);

    int ketQua = soSanhChuoi(chuoi1, chuoi2);

    if (ketQua == -1) {
        cout << "Chuỗi 1 < Chuỗi 2" << endl;
    }
    else if (ketQua == 0) {
        cout << "Chuỗi 1 = Chuỗi 2" << endl;
    }
    else {
        cout << "Chuỗi 1 > Chuỗi 2" << endl;
    }

    return 0;
}
