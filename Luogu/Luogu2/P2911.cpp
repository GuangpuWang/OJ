//
// Created by GuangpuWang on 2020/4/1.
//
#include <bits/stdc++.h>

using namespace std;
int s[100];

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            for (int k = 1; k <= c; k++) {
                int sum = i + j + k;
                s[sum]++;
            }
        }
    }
    int max = 0, t = 0;
    for (int i = 1; i <= 100; i++) {
        if (s[i] > max) {
            max = s[i];
            t = i;
        }
    }
    cout << t;
    return 0;
}
