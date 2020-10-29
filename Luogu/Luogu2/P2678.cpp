//
// Created by GuangpuWang on 2020/4/20.
//
#include <bits/stdc++.h>

using namespace std;
int l, n, m, a[50050], ans = 0;

int main() {
    scanf("%d%d%d", &l, &n, &m);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    int left = 0, right = l;
    while (left <= right) {
        int mid = (left + right) / 2;
        int cnt = 0, t = 0;
        for (int i = 1; i <= n; ++i) {
            if (a[i] - a[t] < mid)
                cnt++;
            else
                t = i;
        }
        if (cnt <= m) {
            ans = mid;
            left = mid + 1;
            right = right;
        } else {
            left = left;
            right = mid - 1;
        }
    }
    printf("%d", ans);
    return 0;
}


