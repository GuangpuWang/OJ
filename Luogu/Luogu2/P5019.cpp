//
// Created by GuangpuWang on 2020/4/16.
//
#include<bits/stdc++.h>

using namespace std;
int n, a[100010];
long long ans;

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
        scanf("%d", &a[i]);
    for (int i = 1; i <= n; ++i) {
        if (a[i] > a[i - 1])
            ans += a[i] - a[i - 1];
    }
    printf("%lld", ans);
    return 0;
}

