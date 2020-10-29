//
// Created by GuangpuWang on 2020/4/10.
//
#include <bits/stdc++.h>

using namespace std;
int n, cnt = 0, a[15] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6}, b[3200], t;

int main() {
    cin >> n;
    n -= 4;
    b[0] = 6;
    for (int i = 1; i < 3100; ++i) {
        t = i;
        while (t >= 1) {
            b[i] = b[i] + a[t % 10];
            t /= 10;
        }
    }
    for (int i = 0; i < 1500; ++i)
        for (int j = 0; j < 1500; ++j)
            if (b[i] + b[j] + b[i + j] == n)
                cnt++;
    cout << cnt;
    return 0;
}
