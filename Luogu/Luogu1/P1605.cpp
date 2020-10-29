//
// Created by GuangpuWang on 2020/5/28.
//
#include<bits/stdc++.h>

using namespace std;
int n, m, cnt, a[10][10], b[10][10], sx, sy, fx, fy, ans = 0;
int xx[5] = {0, 0, 1, 0, -1};
int yy[5] = {0, 1, 0, -1, 0};

void dfs(int x, int y) {
    if (x == fx && y == fy) {
        ans++;
        return;
    } else {
        for (int i = 1; i <= 4; ++i) {
            int tx = x + xx[i], ty = y + yy[i];
            if (a[tx][ty] == 0 && b[tx][ty] == 0) {
                b[x][y] = 1;
                dfs(tx, ty);
                b[x][y] = 0;
            }
        }
    }
}

int main() {
    cin >> n >> m >> cnt >> sx >> sy >> fx >> fy;
    for (int i = 1; i <= cnt; ++i) {
        int tx, ty;
        cin >> tx >> ty;
        a[tx][ty] = 1;
    }
    for (int i = 0; i < 10; ++i)
        for (int j = 0; j < 10; ++j)
            if (i == 0 || j == 0 || i == n + 1 || j == m + 1)
                a[i][j] = 1;
    dfs(sx, sy);
    cout << ans;
    return 0;
}

