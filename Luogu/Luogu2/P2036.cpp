//
// Created by GuangpuWang on 2020/4/10.
//
#include<bits/stdc++.h>

using namespace std;
int n, a[15][5], b[15], ans = 0x7fffffff;

void f(int m) {
    if (m == n + 1) {
        int t1 = 1, t2 = 0, t = 0, flag = 0;
        for (int i = 1; i <= n; ++i)
            if (b[i] == 1) {
                flag = 1;
            }
        if (flag == 1) {
            for (int i = 1; i <= n; ++i)
                if (b[i] == 1) {
                    t1 *= a[i][1];
                    t2 += a[i][2];
                }
            t = abs(t1 - t2);
            ans = min(ans, t);
        }
    } else {
        b[m] = 1;
        f(m + 1);
        b[m] = 0;
        f(m + 1);
    }
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d%d", &a[i][1], &a[i][2]);
    f(1);
    printf("%d", ans);
    return 0;
}

