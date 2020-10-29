//
// Created by GuangpuWang on 2020/4/1.
//
#include <bits/stdc++.h>

using namespace std;
int a[110], b[110];

int main() {
    int n, c, d, cnt = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    for (int i = 1; i <= n; i++) {
        c = a[i];
        for (int j = i + 1; j <= n; j++) {
            d = a[j];
            for (int k = 1; k <= n; k++) {
                if (b[k] == c + d) {
                    cnt++;
                    b[k] = 0;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}
