//
// Created by GuangpuWang on 2020/5/20.
//
#include <bits/stdc++.h>

using namespace std;
int n, sum = 0, ans[15], b[15], c[15], d[15];

void dfs(int row) {
    if (row > n) {
        sum++;
        if (sum <= 3) {
            for (int i = 1; i <= n; ++i)
                cout << ans[i] << " ";
            cout << endl;
        }
        return;
    }
    for (int i = 1; i <= n; ++i) {
        if (!b[i] && !c[i + row] && !d[row - i + n]) {
            ans[row] = i;
            b[i] = 1;
            c[row + i] = 1;
            d[row - i + n] = 1;
            dfs(row + 1);
            b[i] = 0;
            c[row + i] = 0;
            d[row - i + n] = 0;
        }
    }
}

int main() {
    cin >> n;
    dfs(1);
    cout << sum;
    return 0;
}
