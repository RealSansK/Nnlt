#include <iostream>
using namespace std;

int main() {
    float distance;
    cout << "Nhập vào số km đã đi: ";
    cin >> distance;

    float fare = 0;
    if (distance <= 1) {
        fare = distance * 15000;
    }
    else if (distance > 1 && distance <= 10) {
        fare = 10000 + (distance - 1) * 8000;
    }
    else if (distance > 10 && distance <= 30) {
        fare = 10000 + 80000 + (distance - 10) * 6000;
    }
    else if (distance > 30) {
        fare = 10000 + 80000 + 120000 + (distance - 30) * 4000;
    }
    else {
        cout << "Quãng đường không hợp lệ!";
        return 1;
    }

    cout << "Cước taxi cho " << distance << " km là: " << fare << " VND" << endl;
    return 0;
}