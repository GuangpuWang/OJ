#include<bits/stdc++.h>

using namespace std;
int N, A, B, a[210], step[210], vis[210];
queue<int> ceng;

void bfs() {
    while (!ceng.empty()) {
        int f = ceng.front();
        ceng.pop();
        if (a[f] == 0)
            return;
        if (f + a[f] <= N) {
            if (vis[f + a[f]] == 0) {
                vis[f + a[f]] = 1;
                step[f + a[f]] = step[f] + 1;
                ceng.push(f + a[f]);
            } else {
                step[f + a[f]] = min(step[f] + 1, step[f + a[f]]);
            }
        }
        if (f - a[f] >= 1) {
            if (vis[f - a[f]] == 0) {
                vis[f - a[f]] = 1;
                step[f - a[f]] = step[f] + 1;
                ceng.push(f - a[f]);
            } else {
                step[f - a[f]] = min(step[f] + 1, step[f - a[f]]);
            }
        }
    }
}

int main() {
    scanf("%d%d%d", &N, &A, &B);
    for (int i = 1; i <= N; ++i)
        scanf("%d", &a[i]);
    if (A == B) {
        printf("0");
        return 0;
    }
    ceng.push(A);
    vis[A] = 1;
    bfs();
    if (step[B] == 0)
        printf("-1");
    else
        printf("%d", step[B]);
    return 0;
}
