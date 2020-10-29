//
// Created by GuangpuWang on 2020/3/31.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x, t;
    cin >> n;
    n = n / 52;
    for (x = 100; x >= 1; x--) {
        t = n - 7 * x;
        if (t < 21)
            continue;
        else {
            if (t % 21 == 0)
                break;
        }
    }
    cout << x << endl << t / 21;
    return 0;
}