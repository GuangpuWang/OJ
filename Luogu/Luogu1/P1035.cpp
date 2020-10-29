//
// Created by GuangpuWang on 2020/3/31.
//
#include <iostream>

using namespace std;

int main() {
    int n = 0, k;
    cin >> k;
    double s = 0;
    while (s <= k) {
        n++;
        s += 1.0 / n;
    }
    cout << n;
    return 0;
}
