//
// Created by GuangpuWang on 2020/4/1.
//
#include <bits/stdc++.h>

using namespace std;
int a[25][25][25], b[110][10];

int main() {
    int x, y, z, n;
    cin >> x >> y >> z >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 6; j++)
            cin >> b[i][j];
        for (int j = b[i][1]; j <= b[i][4]; j++)
            for (int k = b[i][2]; k <= b[i][5]; k++)
                for (int h = b[i][3]; h <= b[i][6]; h++)
                    a[j][k][h] = 1;
    }
    int cnt = 0;
    for (int i = 1; i <= x; i++)
        for (int j = 1; j <= y; j++)
            for (int k = 1; k <= z; k++)
                if (a[i][j][k] == 0)
                    cnt++;
    cout << cnt;
    return 0;
}
