//
// Created by GuangpuWang on 2020.3.24.
//
#include <iostream>

using namespace std;

int main() {
    int a[8][5];
    for (int i = 1; i <= 7; i++)
        for (int j = 1; j <= 2; j++)
            cin >> a[i][j];
    for (int i = 1; i <= 7; i++)
        a[i][3] = a[i][1] + a[i][2];
    int max = 0, flag = 0, t = 0;
    for (int i = 1; i <= 7; i++) {
        if (a[i][3] > 8) {
            flag = 1;
        }
        if (max < a[i][3]) {
            max = a[i][3];
            t = i;
        }
    }
    if (flag == 0)
        cout << 0;
    else
        cout << t;
    return 0;
}
