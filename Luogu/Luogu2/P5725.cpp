//
// Created by GuangpuWang on 2020/3/31.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t = 1;
    cin >> n;
    while (t <= n * n) {
        if (t < 10)
            cout << 0 << t;
        else
            cout << t;
        if (t % n == 0)
            cout << endl;
        t++;
    }
    cout << endl;
    t = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2 * n - i * 2; j++)
            cout << " ";
        for (int j = 1; j <= i; j++) {
            if (t < 10)
                cout << 0 << t++;
            else
                cout << t++;
        }
        cout <<" "<< endl;
    }
    return 0;
}