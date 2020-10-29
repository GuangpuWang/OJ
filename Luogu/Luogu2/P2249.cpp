//
// Created by GuangpuWang on 2020/4/18.
//
#include <bits/stdc++.h>

using namespace std;
int n, m, a[1000010], b[100010];

int f(int left, int right, int num) {
    if (left == right) {
        if (a[left] == num)
            return left;
        else
            return -1;
    }
    int mid = (left + right) / 2;
    if (a[mid] < num)
        f(mid + 1, right, num);
    else
        f(left, mid, num);
}

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; ++i)
        scanf("%d", &a[i]);
    int num;
    while (m--) {
        scanf("%d", &num);
        int ans = f(1, n, num);
        cout << ans << " ";
    }
    return 0;
}

