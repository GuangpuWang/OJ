//
// Created by GuangpuWang on 3030/4/4.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'a') {
            if (s[i + 3] >= '0' && s[i + 3] <= '9')
                a = s[i + 3] - '0';
            if (s[i + 3] == 'b')        //注意这些情况
                a = b;
            if (s[i + 3] == 'c')
                a = c;
        }
        if (s[i] == 'b') {
            if (s[i + 3] >= '0' && s[i + 3] <= '9')
                b = s[i + 3] - '0';
            if (s[i + 3] == 'a')
                b = a;
            if (s[i + 3] == 'c')
                b = c;
        }
        if (s[i] == 'c') {
            if (s[i + 3] >= '0' && s[i + 3] <= '9')
                c = s[i + 3] - '0';
            if (s[i + 3] == 'b')
                c = b;
            if (s[i + 3] == 'a')
                c = a;
        }
    }
    cout << a << " " << b << " " << c;
    return 0;
}
