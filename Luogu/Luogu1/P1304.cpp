//
// Created by GuangpuWang on 2020/4/4.
//
#include <bits/stdc++.h>

using namespace std;

int Prime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;
    cin >> n;
    for (int i = 4; i <= n; i+=2) {
        for (int j = 2; j <= i - 2; j++) {
            if (Prime(j) == 1 && Prime(i - j) == 1) {
                cout << i << "=" << j << "+" << i - j << endl;
                break;
            }
        }
    }
    return 0;
}
