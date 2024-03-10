#include <iostream>
using namespace std;

int main() {
    int player1, player2;

    cout << "Chon 1 cho keo, 2 cho bua, 3 cho bao:" << endl;
    cout << "Nguoi choi 1: ";
    cin >> player1;
    cout << "Nguoi choi 2: ";
    cin >> player2;

    if (player1 == player2) {
        cout << "Hoa nhau!" << endl;
    } else if ((player1 == 1 && player2 == 3) || (player1 == 2 && player2 == 1) || (player1 == 3 && player2 == 2)) {
        cout << "Nguoi choi 1 thang!" << endl;
    } else {
        cout << "Nguoi choi 2 thang!" << endl;
    }

    return 0;
}
