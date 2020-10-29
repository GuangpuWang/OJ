//
// Created by GuangpuWang on 2020/4/10.
//
#include<bits/stdc++.h>

using namespace std;
int n, a[5050][1505];

int main() {
    scanf("%d", &n);
    a[1][1] = 1;
    a[2][1] = 2;
    for (int i = 3; i <= n; ++i) {
        for (int j = 1; j <= 1500; ++j) {
            a[i][j] += a[i - 1][j] + a[i - 2][j];
            if (a[i][j] >= 10) {
                a[i][j] %= 10;
                a[i][j + 1] += 1;
            }
        }
    }
    int i;
    for (i = 1500; i >= 1; --i)
        if (a[n][i] != 0)
            break;
    for (int j = i; j >= 1; --j)
        printf("%d", a[n][j]);
    if (i == 0)
        printf("0");
    return 0;
}
