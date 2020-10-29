//
// Created by WGP on 2020/3/23.
//
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a;
    cin >> a;
    switch (a) {
        case 1:
            cout << "I love Luogu!";
            break;
        case 2:
            cout << 6 << " " << 4;
            break;
        case 3:
            cout << 3 << endl << 12 << endl << 2;
            break;
        case 4:
            cout << 166.667;
            break;
        case 5:
            cout << 15;
            break;
        case 6:
            cout << sqrt(36 + 81);
            break;
        case 7:
            cout << 110 << endl << 90 << endl << 0;
            break;
        case 8:
            cout << 3.141593 * 10 << endl << 3.141593 * 25 << endl << 3.141593 * 4.0 / 3 * 125;
            break;
        case 9:
            cout << 22;
            break;
        case 10:
            cout << 9;
            break;
        case 11:
            cout << 100.0 / 3;
            break;
        case 12:
            cout << 13 << endl << 'R';
            break;
        case 13:
            cout << int(pow(3.141593 * 4 / 3 * 1064, 1.0 / 3));
            break;
        case 14:
            cout << 50;
            break;
    }
    return 0;
}
