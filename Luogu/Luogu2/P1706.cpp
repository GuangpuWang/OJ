//
// Created by GuangpuWang on 2020/4/10.
//
#include <bits/stdc++.h>

using namespace std;
int n, a[12], vis[12];

void f(int m) {
    if (m == n) {
        for (int i = 0; i < n; ++i)
            printf("%5d", a[i]);
        printf("\n");
    } else {
        for (int i = 0; i < n; ++i) {
            if (vis[i] == 0) {
                vis[i] = 1;
                a[m] = i + 1;
                f(m + 1);
                vis[i] = 0;
            }
        }
    }
}

int main() {
    scanf("%d", &n);
    f(0);
    return 0;
}