//
// Created by GuangpuWang on 2020/4/1.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    memset(b, 0, sizeof(b));
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; j++)
            if (a[j] < a[i])
                b[i]++;
    }
    for (int i = 0; i < n; ++i) {
        cout << b[i] << " ";
    }
    return 0;
}
