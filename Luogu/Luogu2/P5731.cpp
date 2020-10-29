//
// Created by GuangpuWang on 2020/4/1.
//
#include <bits/stdc++.h>

using namespace std;
int a[20][20];

int main() {
    int n;
    cin >> n;
    int num = 1, i = 1, j = 1;
    while (num <= n * n) {
        while (j <= n && a[i][j] == 0) {
            a[i][j++] = num++;
        }
        j--;
        i++;
        while (i <= n && a[i][j] == 0) {
            a[i++][j] = num++;
        }
        i--;
        j--;
        while (j >= 1 && a[i][j] == 0) {
            a[i][j--] = num++;
        }
        j++;
        i--;
        while (i >= 1 && a[i][j] == 0) {
            a[i--][j] = num++;
        }
        i++;
        j++;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; ++j) {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}