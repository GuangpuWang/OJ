//
// Created by GuangpuWang on 2020/4/19.
//
#include <bits/stdc++.h>

using namespace std;
int n, k, a[100050];

void f(int left, int right) {
    if (right - left <= 1) {
        printf("%d", left);
        return;
    }
    int mid = (left + right) / 2;
    int ans = 0;
    for (int i = 1; i <= n; ++i)
        ans += a[i] / mid;
    if (ans >= k)
        f(mid, right);
    else
        f(left, mid);
}

int main() {
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; ++i)
        scanf("%d", &a[i]);
    sort(a + 1, a + 1 + n);
    f(0, a[n]);
    return 0;
}


