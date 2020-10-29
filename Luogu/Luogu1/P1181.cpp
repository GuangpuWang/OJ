//
// Created by GuangpuWang on 2020/4/24.
//
#include <bits/stdc++.h>

using namespace std;
int m, n, a[100010];

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i)
        scanf("%d", &a[i]);
    int t = 0, cnt = 1;
    for (int i = 1; i <= n; ++i) {
        if (t + a[i] <= m)
            t += a[i];
        else {
            t = a[i];
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}
