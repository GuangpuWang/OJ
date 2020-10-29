//
// Created by GuangpuWang on 2020/4/7.
//
#include <bits/stdc++.h>

using namespace std;
int ans[1100], f[1100], t[1100];

void f1() {
    memset(t, 0, sizeof(t));
    for (int i = 0; i < 500; ++i)
        for (int j = 0; j < 500; ++j)
            t[i + j] += ans[i] * f[j];
    for (int i = 0; i < 500; ++i) {
        t[i + 1] += t[i] / 10;
        t[i] %= 10;
    }
    memcpy(ans, t, sizeof(ans));
}

void f2() {
    memset(t, 0, sizeof(t));
    for (int i = 0; i < 500; ++i)
        for (int j = 0; j < 500; ++j)
            t[i + j] += f[i] * f[j];
    for (int i = 0; i < 500; ++i) {
        t[i + 1] += t[i] / 10;
        t[i] %= 10;
    }
    memcpy(f, t, sizeof(f));
}

int main() {
    int p;
    cin >> p;
    cout << int(log10(2) * p + 1) << endl;
    f[0] = 2;
    ans[0] = 1;
    while (p) {
        if (p % 2 == 1)
            f1();
        p /= 2;
        f2();
    }
    ans[0] -= 1;
    for (int i = 499; i >= 0; i--) {
        if ((i + 1) % 50 == 0 && i != 499)
            cout << endl << ans[i];
        else
            cout << ans[i];
    }
    return 0;
}
