//
// Created by GuangpuWang on 2020/4/4.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, sum = 1;
    cin >> n;
    for (int i = n - 1; i >= 1; i--) {
        sum = (sum + 1) * 2;
    }
    cout << sum;
    return 0;
}