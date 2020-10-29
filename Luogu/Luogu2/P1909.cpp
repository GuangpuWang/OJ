//
// Created by GuangpuWang on 2020.3.24.
//
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int n, a[5][5], b[5];
    cin >> n;
    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 2; j++)
            cin >> a[i][j];
    for (int i = 1; i <= 3; i++) {
        a[i][3] = ceil(n * 1.0 / a[i][1]);
        b[i] = a[i][3] * a[i][2];
    }
    sort(b + 1, b + 4);
    cout << b[1];
    return 0;
}
