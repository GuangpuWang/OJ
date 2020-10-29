//
// Created by GuangpuWang on 2020/4/10.
//
#include<bits/stdc++.h>

using namespace std;
int n, m, ans = 0, minlen = 0x7fffffff;
char c[60][60];

int main() {
    int i, j, k, g;
    cin >> n >> m;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++)
            cin >> c[i][j];
    for (i = 1; i <= n - 2; i++)
        for (j = i + 1; j <= n - 1; j++){
            ans = 0;
            for (k = 1; k <= i; k++)
                for (g = 1; g <= m; g++)
                    if (c[k][g] != 'W') ans++;
            for (k = i + 1; k <= j; k++)
                for (g = 1; g <= m; g++)
                    if (c[k][g] != 'B') ans++;
            for (k = j + 1; k <= n; k++)
                for (g = 1; g <= m; g++)
                    if (c[k][g] != 'R') ans++;
            minlen = min(ans, minlen);
        }
    cout << minlen;
    return 0;
}
