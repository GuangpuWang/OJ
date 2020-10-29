//
// Created by GuangpuWang on 2020/3/31.
//
#include <iostream>

using namespace std;
int a[100][100];

int main() {
    int n;
    cin >> n;
    a[1][0] = 1;
    for (int i = 2; i <= n; i++) {
        int s = 0, t = 0;
        for (int j = 0; j < 90; j++) {
            t = i * a[i - 1][j] + s;
            a[i][j] = t % 10;
            s = t / 10;
        }
    }
    int len = 0;
    for (int i = 0; i <= 90; i++) {
        for (int j = 1; j <= n; j++) {
            a[0][i] += a[j][i];
            if (a[0][i] >= 10) {
                a[0][i] -= 10;
                a[0][i + 1] += 1;
            }
        }

    }
    for (int i = 90; i >= 0; i--)
        if (a[0][i] != 0) {
            len = i;
            break;
        }
    for (int i = len; i >= 0; i--)
        cout << a[0][i];
    return 0;
}