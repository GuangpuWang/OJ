//
// Created by GuangpuWang on 2020/4/15.
//
#include<bits/stdc++.h>

using namespace std;
int n, x, a[100010];
long long ans = 0;

int main() {
    scanf("%d %d", &n, &x);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        if (i >= 2) {
            int t = a[i - 1] + a[i];
            if (t > x) {
                ans += t - x;
                a[i] = a[i] + x - t;
            }
        }
    }
    printf("%lld", ans);
    return 0;
}

