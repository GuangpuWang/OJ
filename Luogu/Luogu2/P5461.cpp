//
// Created by GuangpuWang on 2020/4/4.
//
#include <bits/stdc++.h>

using namespace std;
int a[1100][1100];

void f(int len, int row, int col) {
    if (len == 1)return;
    for (int i = row; i <= len / 2 + row - 1; ++i)
        for (int j = col; j <= len / 2 + col - 1; ++j)
            a[i][j] = 0;
    f(len / 2, row, len / 2 + col);
    f(len / 2, len / 2 + row, col);
    f(len / 2, len / 2 + row, len / 2 + col);
}

int main() {
    int n, len;
    cin >> n;
    len = pow(2, n);
    for (int i = 1; i <= len; ++i)
        for (int j = 1; j <= len; ++j)
            a[i][j] = 1;
    f(len, 1, 1);
    for (int i = 1; i <= len; ++i) {
        for (int j = 1; j <= len; ++j)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
