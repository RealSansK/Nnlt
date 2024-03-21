#include <iostream>
using namespace std;

bool isInsideCircle(int x, int y, int x0, int y0, int R) {
    int distanceSquared = (x - x0) * (x - x0) + (y - y0) * (y - y0);

    // So sánh khoảng cách với bán kính R
    if (distanceSquared <= R * R) {
        return true; // Điểm A nằm trong hoặc trên đường tròn
    } else {
        return false; // Điểm A nằm ngoài đường tròn
    }
}

int main() {
    int x, y; 
    int x0, y0;
    int R;

    cout << "Nhập tọa độ điểm A (x y): ";
    cin >> x >> y;

    cout << "Nhập tọa độ tâm O (x0 y0): ";
    cin >> x0 >> y0;

    cout << "Nhập bán kính R: ";
    cin >> R;

    if (isInsideCircle(x, y, x0, y0, R)) {
        cout << "Điểm A nằm trong hoặc trên đường tròn." << endl;
    } else {
        cout << "Điểm A nằm ngoài đường tròn." << endl;
    }

    return 0;
}