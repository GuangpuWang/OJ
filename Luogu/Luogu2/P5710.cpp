//
// Created by WGP on 2020/3/24.
//
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n % 2 == 0 && n >= 4 && n <= 12)
        cout << 1 << " ";
    else
        cout << 0 << " ";
    if (n % 2 == 0 || (n >= 4 && n <= 12))
        cout << 1 << " ";
    else
        cout << 0 << " ";
    if (n % 2 == 0) {
        if (n >= 4 && n <= 12)
            cout << 0 << " ";
        else
            cout << 1 << " ";
    } else {
        if (n >= 4 && n <= 12)
            cout << 1 << " ";
        else
            cout << 0 << " ";
    }
    if (n % 2 == 0 || (n >= 4 && n <= 12))
        cout << 0;
    else
        cout << 1;
    return 0;
}