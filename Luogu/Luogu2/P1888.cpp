//
// Created by GuangpuWang on 2020.3.24.
//
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    int t = __gcd(a[0], a[2]);
    cout << a[0] / t << "/" << a[2] / t;
    return 0;
}