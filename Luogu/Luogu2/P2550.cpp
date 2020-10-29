//
// Created by GuangpuWang on 2020/4/1.
//
#include <bits/stdc++.h>

using namespace std;
int a[10], b[1010][10], c[10];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= 7; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++) {
        int cnt = 0;
        for (int j = 1; j <= 7; j++) {
            cin >> b[i][j];
            for (int k = 1; k <= 7; k++)
                if (b[i][j] == a[k]) {
                    cnt++;
                    break;
                }
        }
        c[8 - cnt] += 1;
    }
    for (int i = 1; i <= 7; i++)
        cout << c[i] << " ";
    return 0;
}
