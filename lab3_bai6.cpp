#include <iostream>

int main() {
    int N, sum = 0;
    std::cout << "Nhập vào số nguyên dương N: ";
    std::cin >> N;

    for (int i = 2; i <= N / 2; ++i) { 
        if (N % i == 0) {
            sum += i; 
        }
    }

    std::cout << "Tổng các ước số của " << N << " (không kể 1 và " << N << ") là: " << sum << std::endl;

    return 0;
}
