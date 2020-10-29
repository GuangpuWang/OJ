//
// Created by GuangpuWang on 2020/4/7.
//
#include <bits/stdc++.h>

using namespace std;
int a[5000];

int main() {
    int t;
    cin >> t;
    while (t--) {
        memset(a, 0, sizeof(a));
        a[0] = 1;
        int n, m, s;
        cin >> n >> m;
        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j < 5000; ++j) {
                int t = a[j] * i + s;
                s = 0;
                if (t < 10) {
                    a[j] = t;
                } else {
                    a[j] = t % 10;
                    s = t / 10;
                }
            }
        }
        int i;
        for (i = 4999; i >= 0; i--)
            if (a[i] != 0)
                break;
        int ans = 0;
        for (int j = i; j >= 0; j--) {
            if (a[j] == m)
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
