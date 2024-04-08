#include <iostream>
#include <vector>

// Hàm kiểm tra hai số nguyên tố cùng nhau
bool laNguyenToCungNhau(int a, int b) {
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a == 1;
}

// Hàm tạo ma trận các số nguyên tố cùng nhau
std::vector<std::vector<bool>> taoMaTranNguyenToCungNhau(int n) {
    std::vector<std::vector<bool>> maTran(n, std::vector<bool>(n, false));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            maTran[i - 1][j - 1] = laNguyenToCungNhau(i, j);
        }
    }
    return maTran;
}

int main() {
    int n;
    std::cout << "Nhap n: ";
    std::cin >> n;

    std::vector<std::vector<bool>> maTran = taoMaTranNguyenToCungNhau(n);

    // In ma trận
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << maTran[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
