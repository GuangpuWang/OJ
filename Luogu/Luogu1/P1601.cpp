//
// Created by GuangpuWang on 2020/4/5.
//
#include <bits/stdc++.h>

using namespace std;
int a[550], b[550], c[550];

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.length(); ++i)
        a[s1.length() - 1 - i] = s1[i] - '0';
    for (int i = 0; i < s2.length(); ++i)
        b[s2.length() - 1 - i] = s2[i] - '0';
    for (int i = 0; i < 550; i++) {
        int t = a[i] + b[i] + c[i];
        if (t < 10)
            c[i] = t;
        else {
            c[i] = t % 10;
            c[i + 1]++;
        }
    }
    int i;
    for (i = 549; i >= 0; i--)
        if (c[i] != 0)
            break;
    for (int j = i; j >= 0; j--)
        cout << c[j];
    if (i == -1)                    //0+0
        cout << 0;
    return 0;
}
