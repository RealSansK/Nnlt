#include<iostream>
#include<string>
using namespace std;

string xoaKhoangTrangDauCuoi(string str) {
    
    while (!str.empty() && isspace(str.front())) {
        str.erase(str.begin());
    }

    
    while (!str.empty() && isspace(str.back())) {
        str.pop_back();
    }

    return str;
}

int main() {
    string chuoi;
    cout << "Nhập chuỗi: ";
    getline(cin, chuoi);

    chuoi = xoaKhoangTrangDauCuoi(chuoi);

    cout << "Chuỗi sau khi xóa khoảng trắng ở đầu và cuối: '" << chuoi << "'" << endl;

    return 0;
}
