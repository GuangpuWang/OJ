//
// Created by GuangpuWang on 2020/3/31.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    double x, s = 0;
    cin >> x;
    int i = 0;
    do {
        i++;
        s = 100 * (1 - pow(0.98, i));
    } while (s < x);
    cout << i;
    return 0;
}
