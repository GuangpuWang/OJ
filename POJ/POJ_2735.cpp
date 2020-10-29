//
// Created by WGP on 2019/8/3 at 16:00.
//
#include <iostream>

using namespace std;

int main() {
    int n;
    while (cin >> n && n) {
        int a = 0, b = 1;
        while (n) {
            a += (n % 10) * b;
            n /= 10;
            b *= 8;
        }
        cout << a << endl;
    }
    return 0;
}
