//
// Created by GuangpuWang on 2020/4/4.
//
#include <bits/stdc++.h>

using namespace std;

int f(int n) {
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        int a;
        cin >> a;
        if (f(a) == 1)
            cout << a << " ";
    }
    return 0;
}
