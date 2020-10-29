//
// Created by GuangpuWang on 2020/4/1.
//
#include <bits/stdc++.h>

using namespace std;
int a[50][50];
struct point {   //用于保存每个数的行和列
    int i;
    int j;
};
point b[2000];

int main() {
    int n, k = 2;
    cin >> n;
    a[1][n / 2 + 1] = 1;
    b[1].i = 1;
    b[1].j = n / 2 + 1;
    while (k <= n * n) {
        if (b[k - 1].i == 1 && b[k - 1].j != n) {
            a[n][b[k - 1].j + 1] = k;
            b[k].i = n;
            b[k].j = b[k - 1].j + 1;
        }
        if (b[k - 1].i != 1 && b[k - 1].j == n) {
            a[b[k - 1].i - 1][1] = k;
            b[k].i = b[k - 1].i - 1;
            b[k].j = 1;
        }
        if (b[k - 1].i == 1 && b[k - 1].j == n) {
            a[2][n] = k;
            b[k].i = 2;
            b[k].j = n;
        }
        if (b[k - 1].i != 1 && b[k - 1].j != n) {
            if (a[b[k - 1].i - 1][b[k - 1].j + 1] == 0) {
                a[b[k - 1].i - 1][b[k - 1].j + 1] = k;
                b[k].i = b[k - 1].i - 1;
                b[k].j = b[k - 1].j + 1;
            } else {
                a[b[k - 1].i + 1][b[k - 1].j] = k;
                b[k].i = b[k - 1].i + 1;
                b[k].j = b[k - 1].j;
            }
        }
        k++;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
