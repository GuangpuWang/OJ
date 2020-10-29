//
// Created by GuangpuWang on 2020/4/7.
//
#include <bits/stdc++.h>

using namespace std;
int a[10000], b[10000];

int main() {
    int n, x = 1, s = 0;
    cin >> n;
    while (n > 0) {
        x++;
        a[x - 2] = x;
        n -= x;
    }
    if (n < 0) {
        a[x - 2] = 0;
        n += x;
        int t1 = n, t2 = x;
        while (t1 > 0) {
            t2--;
            if (t2 - 2 < 0)
                t2 = x - 1;
            a[t2 - 2] += 1;
            t1--;
        }
        x--;
    }
    for (int i = 0; i <= x - 2; ++i)
        cout << a[i] << " ";
    cout << endl;
    b[0] = 1;
    for (int i = 0; i <= x - 2; ++i) {
        for (int j = 0; j < 10000; ++j) {
            int t = a[i] * b[j] + s;
            s = 0;
            if (t < 10)
                b[j] = t;
            else {
                b[j] = t % 10;
                s = t / 10;
            }
        }
    }
    int i;
    for (i = 10000 - 1; i >= 0; i--)
        if (b[i] != 0)
            break;
    for (int j = i; j >= 0; --j)
        cout << b[j];
    return 0;
}
