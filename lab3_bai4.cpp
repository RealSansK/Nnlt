#include <iostream>
#include <limits> 

int main() {
    double number;
    double min = std::numeric_limits<double>::max(); 
    int count = 0;

    std::cout << "Nhập vào các số thực (0 để kết thúc): " << std::endl;

    do {
        std::cin >> number; 
        if (number != 0) {
            count++; 
            if (number < min) {
                min = number; 
            }
        }
    } while (number != 0); 

    std::cout << "Bạn đã nhập vào " << count + 1 << " số thực." << std::endl; 
    std::cout << "Số thực nhỏ nhất là: " << min << std::endl;

    return 0;
}
