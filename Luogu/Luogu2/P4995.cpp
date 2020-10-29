//
// Created by GuangpuWang on 2020/4/16.
//
#include<bits/stdc++.h>

using namespace std;
int n, a[310];
long long ans, cnt = 1;

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
        scanf("%d", &a[i]);
    sort(a + 1, a + n + 1);
    int i = 0, j = n;
    while (i <= j) {
        ans += (a[j] - a[i]) * (a[j] - a[i]);
        if (cnt % 2 == 1)
            i++;
        else
            j--;
        cnt++;
    }
    printf("%lld", ans);
    return 0;
}

