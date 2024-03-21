#include <iostream>
using namespace std;

int main() {
    float distance;
    cout << "Nhap vao so km da di: ";
    cin >> distance;

    float fare = 0;
    if (distance >= 1 && distance <= 10) {
        fare = distance * 10000;
    }
    else if (distance > 10 && distance <= 30) {
        fare = 100000 + (distance - 10) * 6000;
    }
    else if (distance > 30) {
        fare = 100000 + 200000 + (distance - 30) * 4000;
    }
    else {
        cout << "Quang duong khong hop le!";
        return 1;
    }

    cout << "Cuoc taxi cho " << distance << " km la: " << fare << " VND" << endl;
    return 0;
}