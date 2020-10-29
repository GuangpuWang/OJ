//
// Created by GuangpuWang on 2020/4/5.
//
#include <bits/stdc++.h>

using namespace std;
int a[550][550], b[550][550], num = 1;
int n, m;

void f0(int x, int y, int r) {
    for (int i = x - r; i <= x + r; ++i)
        for (int j = y - r; j <= y + r; ++j)
            b[i - x + r + 1][j - y + r + 1] = a[i][j];
    for (int i = 1; i <= 2 * r + 1; ++i)
        for (int j = 1; j <= 2 * r + 1; ++j)
            a[j + x - r - 1][2 * r + 2 - i + y - r - 1] = b[i][j];
}

void f1(int x, int y, int r) {
    for (int i = x - r; i <= x + r; ++i)
        for (int j = y - r; j <= y + r; ++j)
            b[i - x + r + 1][j - y + r + 1] = a[i][j];
    for (int i = 1; i <= 2 * r + 1; ++i)
        for (int j = 1; j <= 2 * r + 1; ++j)
            a[2 * r + 2 - j + x - r - 1][i + y - r - 1] = b[i][j];
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            a[i][j] = num++;
    for (int i = 1; i <= m; ++i) {
        int x, y, r, z;
        cin >> x >> y >> r >> z;
        if (z == 0)
            f0(x, y, r);
        if (z == 1)
            f1(x, y, r);
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
