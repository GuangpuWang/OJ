//
// Created by GuangpuWang on 2020/4/10.
//
#include<bits/stdc++.h>

using namespace std;
int r, c, num, cnt = 0;
char a[110][110];

int main() {
    scanf("%d %d %d", &r, &c, &num);
    for (int i = 1; i <= r; ++i)
        for (int j = 1; j <= c; ++j)
            cin >> a[i][j];
    for (int i = 1; i <= r; ++i) {
        for (int j = 1; j <= c + 1 - num; ++j) {
            int flag = 1;
            for (int k = j; k <= j + num - 1; ++k)
                if (a[i][k] == '#') {
                    flag = 0;
                    break;
                }
            cnt += flag;
        }
    }
    for (int i = 1; i <= c; ++i) {
        for (int j = 1; j <= r + 1 - num; ++j) {
            int flag = 1;
            for (int k = j; k <= j + num - 1; k++)
                if (a[k][i] == '#') {
                    flag = 0;
                    break;
                }
            cnt += flag;
        }
    }
    if (num != 1)
        cout << cnt;
    else
        cout << cnt / 2;
    return 0;
}
