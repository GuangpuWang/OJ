//
// Created by WGP on 2019/8/3 at 15:51.
//
#include <iostream>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int a = 0, b = 1;
        while (n) {
            a += (n % 8) * b;
            n /= 8;
            b *= 10;
        }
        cout << a << endl;
    }
    return 0;
}
