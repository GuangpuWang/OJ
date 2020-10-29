//
// Created by WGP on 2019/8/5 at 14:28.
//利用对数求阶乘的位数会超时，用公式直接算
#include <iostream>
#include <cmath>

using namespace std;

const double e = 2.718281828459;
const double pi = 3.1415926535898;

int main() {
    int num;
    while (cin >> num) {
        while (num--) {
            int n;
            cin >> n;
            long long ans = (long long) ((double) log10(sqrt(2 * pi * n)) + n * log10(n / e)) + 1;
            cout << ans << endl;
        }
    }
    return 0;
}
