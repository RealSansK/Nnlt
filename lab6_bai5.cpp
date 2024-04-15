#include<iostream>
#include<string>
using namespace std;

int main() {
    string a, b;
    cout << "Nhập chuỗi a: ";
    cin >> a;
    cout << "Nhập chuỗi b: ";
    cin >> b;

    string c_AND = "", c_OR = "", c_XOR = "";

    for (int i = 0; i < a.length(); i++) {
        c_AND += (a[i] == '1' && b[i] == '1') ? '1' : '0';
        c_OR += (a[i] == '1' || b[i] == '1') ? '1' : '0';
        c_XOR += (a[i] != b[i]) ? '1' : '0';
    }

    cout << "Kết quả phép toán AND: " << c_AND << endl;
    cout << "Kết quả phép toán OR: " << c_OR << endl;
    cout << "Kết quả phép toán XOR: " << c_XOR << endl;

    return 0;
}
