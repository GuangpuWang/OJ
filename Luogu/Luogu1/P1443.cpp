#include<bits/stdc++.h>

using namespace std;
queue<int> qx, qy, qstep;
int n, m, X, Y, a[500][500];
bool vis[500][500];
int xx[9] = {0, -1, -2, -2, -1, 1, 2, 2, 1};
int yy[9] = {0, -2, -1, 1, 2, 2, 1, -1, -2};

void bfs() {
    int x, y, step;
    while (qx.empty() == 0) {
        x = qx.front();
        y = qy.front();
        step = qstep.front();
        a[x][y] = step;
        qx.pop();
        qy.pop();
        qstep.pop();
        for (int i = 1; i <= 8; ++i)
            if (x + xx[i] >= 1 && x + xx[i] <= n && y + yy[i] >= 1 && y + yy[i] <= m &&
                vis[x + xx[i]][y + yy[i]] == 0) {
                vis[x + xx[i]][y + yy[i]] = true;
                qx.push(x + xx[i]);
                qy.push(y + yy[i]);
                qstep.push(step + 1);
            }
    }
}

int main() {
    scanf("%d%d%d%d", &n, &m, &X, &Y);
    qx.push(X);
    qy.push(Y);
    qstep.push(0);
    vis[X][Y] = true;
    bfs();
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j)
            if (!vis[i][j])
                printf("-1   ");
            else
                printf("%-5d", a[i][j]);
        printf("\n");
    }
    return 0;
}