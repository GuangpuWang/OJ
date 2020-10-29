//
// Created by GuangpuWang on 2020/4/10.
//
#include<bits/stdc++.h>

using namespace std;
int n, a[5050], t, ans;
int M = 1000000007;

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &t);
        a[t]++;
    }
    for (int i = 2; i <= 5000; ++i)
        if (a[i] >= 2) {
            for (int j = 1; j <= i / 2; ++j) {
                int k = i - j;
                if (a[j] >= 1 && a[k] >= 1) {
                    if (k != j) {
                        int t1 = a[i] * (a[i] - 1) / 2;
                        ans += ((t1 % M) * (a[j] % M) * (a[k] % M)) % M;
                    } else if (k == j && a[j] >= 2) {
                        int t1 = a[i] * (a[i] - 1) / 2;
                        int t2 = a[k] * (a[k] - 1) / 2;
                        ans += ((t1 % M) * (t2 % M)) % M;
                    }
                    ans %= M;
                }
            }
        }
    printf("%d", ans % M);
    return 0;
}
