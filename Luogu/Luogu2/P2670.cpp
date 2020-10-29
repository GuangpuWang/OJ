//
// Created by GuangpuWang on 2020/4/4.
//
#include <bits/stdc++.h>

using namespace std;
char a[110][110];
int b[110][110];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            cin >> a[i][j];
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (a[i][j] == '?') {
                for (int x = i - 1; x <= i + 1; ++x)
                    for (int y = j - 1; y <= j + 1; ++y)
                        if (a[x][y] == '*')
                            b[i][j]++;
            }
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j){
            if(a[i][j]=='*')
                cout<<"*";
            else
                cout<<b[i][j];
        }
        cout << endl;
    }
    return 0;
}
