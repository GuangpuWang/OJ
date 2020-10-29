//
// Created by GuangpuWang on 2020/4/24.
//
#include<bits/stdc++.h>

using namespace std;
int n, m, a[100010], l = 0, r = 0;

bool f(int x) {
    int t1 = 0, cnt = 0;
    for (int i = 1; i <= n; ++i) {
        if ((t1 + a[i]) <= x)
            t1 += a[i];
        else {
            t1 = a[i];
            cnt++;
        }
    }
    return cnt < m;
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        l = max(l, a[i]);
        r += a[i];
    }
    while (l <= r) {
        int mid = (l + r) / 2;
        if (f(mid))
            r = mid - 1;
        else
            l = mid + 1;
    }
    printf("%d", l);
    return 0;
}
