//
// Created by GuangpuWang on 2020/4/1.
//
#include <bits/stdc++.h>

using namespace std;
int a[25][25];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i)
                a[i][j] = 1;
            else
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}