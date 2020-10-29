//
// Created by GuangpuWang on 2020/4/1.
//
#include <bits/stdc++.h>

using namespace std;
int a[120][120];

int main() {
    int n, m, k, x, y;
    cin >> n >> m >> k;
    for (int i = 1; i <= m; i++) {
        cin >> x >> y;
        a[x - 2][y] = a[x - 1][y] = a[x][y] = a[x + 1][y] = a[x + 2][y] = a[x][y - 2] = a[x][y - 1]
                = a[x][y + 1] = a[x][y + 2] = a[x - 1][y - 1] = a[x - 1][y + 1] = a[x + 1][y - 1] = a[x + 1][y + 1] = 1;
    }
    for (int i = 1; i <= k; i++) {
        cin >> x >> y;
        for (int j = x - 2; j <= x + 2; j++)
            for (int k = y - 2; k <= y + 2; k++)
                a[j][k] = 1;
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (a[i][j] == 0)
                cnt++;
    cout << cnt;
    return 0;
}
