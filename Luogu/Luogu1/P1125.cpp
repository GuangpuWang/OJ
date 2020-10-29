//
// Created by GuangpuWang on 2020/4/2.
//
#include <bits/stdc++.h>

using namespace std;
int a[30];

int Prime(int n) {
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
        a[s[i] - 'a' + 1]++;
    sort(a + 1, a + 27);
    int min = 0, max = 0;
    for (int i = 1; i < 26; i++) {
        if (a[i] != 0) {
            min = a[i];
            break;
        }
    }
    for (int i = 26; i >= 1; i--) {
        if (a[i] != 0) {
            max = a[i];
            break;
        }
    }
    if (Prime(max - min) == 1) {
        cout << "Lucky Word" << endl << max - min;
    } else
        cout << "No Answer" << endl << 0;
    return 0;
}
