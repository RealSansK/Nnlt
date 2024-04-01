#include <iostream>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int m, n;


    std::cout << "Nhập số nguyên dương m: ";
    std::cin >> m;
    std::cout << "Nhập số nguyên dương n: ";
    std::cin >> n;

    if (gcd(m, n) == 1) {
        std::cout << "Hai số " << m << " và " << n << " là nguyên tố cùng nhau." << std::endl;
    } else {
        std::cout << "Hai số " << m << " và " << n << " không phải là nguyên tố cùng nhau." << std::endl;
    }

    return 0;
}
