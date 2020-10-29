//
// Created by GuangpuWang on 2020/4/1.
//
#include <bits/stdc++.h>

using namespace std;
int a[3030];

int main() {
    int n, m, min = 0x7fffffff;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n - m + 1; i++) {
        int sum = 0;
        for (int j = 1; j <= m; j++)
            sum += a[i - 1 + j];
        if (sum < min)
            min = sum;
    }
    cout << min;
    return 0;
}
