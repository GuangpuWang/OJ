//
// Created by GuangpuWang on 2020/4/18.
//
#include <bits/stdc++.h>

using namespace std;
long long int n, m, a[1000050], low = 0, high = 0;

int f(int low, int high) {
    if (low == high - 1)
        return low;
    int mid = (low + high) / 2;
    int t = upper_bound(a + 1, a + 1 + n, mid) - a;
    long long int ans = 0;
    for (int i = t; i <= n; ++i) {
        ans += a[i] - mid;
    }
//	cout<<low<<" "<<high<<" "<<mid<<" "<<t<<" "<<ans<<endl;
    if (ans < m)
        f(low, mid);
    else
        f(mid, high);
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a + 1, a + 1 + n);
    low = a[1];
    high = a[n];
    printf("%d", f(low, high));
    return 0;
}


