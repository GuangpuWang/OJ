//
// Created by GuangpuWang on 2020/4/18.
//
#include <bits/stdc++.h>

using namespace std;
long long int n, c, a[200050];
long long ans;

int main() {
    scanf("%d%d", &n, &c);
    for (int i = 1; i <= n; ++i)
        scanf("%d", &a[i]);
    sort(a + 1, a + 1 + n);
    for (int i = 1; i <= n; ++i) {
        int t1 = lower_bound(a + i, a + 1 + n, a[i] + c) - a;
        int t2 = upper_bound(a + i, a + 1 + n, a[i] + c) - a;
        ans += t2 - t1;
    }
    printf("%lld", ans);
    return 0;
}

