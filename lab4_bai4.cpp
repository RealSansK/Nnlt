#include <iostream>
#include <cstring>
using namespace std;
int xuat_hien(char* chuoi_hien_tai, char* chuoi_con) {
    char* vi_tri = strstr(chuoi_hien_tai, chuoi_con);
    if (vi_tri != nullptr) {
      
        return vi_tri - chuoi_hien_tai;
    }
    return -1; 
}

int main() {
    char chuoi_hien_tai[] = "Xin chao, day la chuoi hien tai.";
    char chuoi_con[] = "chuoi";

    int vi_tri = xuat_hien(chuoi_hien_tai, chuoi_con);
    if (vi_tri != -1) {
        std::cout << "Chuoi con '" << chuoi_con << "' xuat hien cuoi cung tai vi tri: " << vi_tri << endl;
    }
    else {
        std::cout << "Chuoi con '" << chuoi_con << "' khong xuat hien trong chuoi hien tai." << endl;
    }

    return 0;
}
