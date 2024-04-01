#include <iostream>
#include <iomanip>

int main() {
    for (int i = 1; i <= 10; ++i) {
        for (int j = 1; j <= 10; ++j) {
           
            int num = (i % 2 != 0) ? j : 11 - j;
            std::cout << std::setw(3) << num;
        }
        std::cout << std::endl; 
    }
    return 0;
}
