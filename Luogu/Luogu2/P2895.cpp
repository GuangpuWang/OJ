
#include<bits/stdc++.h>

using namespace std;
int M, place[350][350], vis[350][350];
queue<int> qx, qy, qstep;
struct Node {
    int x, y, t;
};
int xx[5] = {0, 0, 1, 0, -1};
int yy[5] = {0, 1, 0, -1, 0};
bool ok = false;

void bfs() {
    while (!qx.empty()) {
        int x = qx.front(), y = qy.front(), step = qstep.front();
        qx.pop();
        qy.pop();
        qstep.pop();
        step += 1;
        for (int i = 1; i <= 4; ++i) {
            int tx = x + xx[i], ty = y + yy[i];
            if (tx >= 0 && ty >= 0 && step < place[x + xx[i]][y + yy[i]]) {
                qx.push(tx);
                qy.push(ty);
                qstep.push(step);
                vis[tx][ty] = 1;
                if (place[tx][ty] == 10000) {
                    printf("%d", step);
                    ok = true;
                    return;
                }
            }
        }
    }
}

int main() {
    scanf("%d", &M);
    Node node;
    for (int i = 0; i < 350; ++i)
        for (int j = 0; j < 350; ++j)
            place[i][j] = 10000;
    for (int i = 1; i <= M; ++i) {
        scanf("%d%d%d", &node.x, &node.y, &node.t);
        place[node.x][node.y] = min(node.t, place[node.x][node.y]);
        if (node.x - 1 >= 0) place[node.x - 1][node.y] = min(node.t, place[node.x - 1][node.y]);
        if (node.y - 1 >= 0) place[node.x][node.y - 1] = min(node.t, place[node.x][node.y - 1]);
        place[node.x + 1][node.y] = min(node.t, place[node.x + 1][node.y]);
        place[node.x][node.y + 1] = min(node.t, place[node.x][node.y + 1]);
    }
    qx.push(0);
    qy.push(0);
    qstep.push(0);
    vis[0][0] = 1;
    bfs();
    if (!ok)
        printf("-1");
    return 0;
}

