//
// Created by GuangpuWang on 2020/4/13.
//
#include<bits/stdc++.h>

using namespace std;
int m, n, a[1050][10005];

int main() {
    scanf("%d %d", &m, &n);
    n = n - m + 1;
    m = 1;
    a[1][0] = 1;
    a[2][0] = 1;
    for (int i = 3; i <= n; ++i) {
        for (int j = 0; j <= 10000; ++j) {
            int t = a[i][j] + a[i - 1][j] + a[i - 2][j];
            if (t < 10)
                a[i][j] = t;
            else {
                a[i][j] = t % 10;
                a[i][j + 1] = t / 10;
            }
        }
    }
    int i;
    for (i = 10000; i >= 0; --i)
        if (a[n][i] != 0)
            break;
    for (int j = i; j >= 0; --j)
        printf("%d", a[n][j]);
    return 0;
}
