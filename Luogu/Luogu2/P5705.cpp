//
// Created by WGP on 2020/3/23.
//
#include <iostream>

using namespace std;

int main() {
    double a;
    cin >> a;
    int b = a * 10, c[10], count = 0;
    while (b) {
        c[count++] = b % 10;
        b /= 10;
    }
    cout << c[0] << ".";
    for (int i = 1; i < count; i++) {
        cout << c[i];
    }
    return 0;
}
