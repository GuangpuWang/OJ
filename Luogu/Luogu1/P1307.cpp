//
// Created by GuangpuWang on 2020/3/31.
//
#include <iostream>

using namespace std;

int main() {
    int n, flag = 1, t = 0;
    cin >> n;
    if (n < 0) {
        flag = -1;
        n = -1 * n;
    }
    while (n) {
        t = t * 10 + n % 10;
        n /= 10;
    }
    cout << flag * t;
    return 0;
}
