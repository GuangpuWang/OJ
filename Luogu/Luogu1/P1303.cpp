//
// Created by GuangpuWang on 2020/4/5.
//
#include <bits/stdc++.h>

using namespace std;
int a[2100], b[2100], c[4200], flag = 1;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    if ((s1[0] == '-' && s2[0] != '-') || (s1[0] != '-' && s2[0] == '-'))
        flag = 0;
    for (int i = 0; i < s1.length(); ++i)
        a[s1.length() - 1 - i] = s1[i] - '0';
    for (int i = 0; i < s2.length(); ++i)
        b[s2.length() - 1 - i] = s2[i] - '0';
    int t = 0;
    for (int i = 0; i < s1.length(); ++i) {
        if (a[i] == -3)
            break;
        for (int j = 0; j < s2.length(); j++) {
            if (b[j] == -3)
                break;
            t = a[i] * b[j] + c[i + j];
            if (t < 10)
                c[i + j] = t;
            else {
                c[i + j] = t % 10;
                c[i + j + 1] += t / 10;
            }
        }
    }
    int i = 4199;
    while (c[i] == 0 && i >= 0) {
        i--;
    }
    if (i == -1)
        cout << 0;
    else {
        if (flag == 0)
            cout << "-";
        for (int j = i; j >= 0; j--)
            cout << c[j];
    }
    return 0;
}
