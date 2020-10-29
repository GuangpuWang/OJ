//
// Created by GuangpuWang on 2020/4/4.
//
#include <bits/stdc++.h>

using namespace std;
int year[1000], n = 1;

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; ++i) {
        if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
            year[n++] = i;
    }
    cout << n - 1 << endl;
    for (int i = 1; i < n; i++)
        cout << year[i] << " ";
    return 0;
}
