//
// Created by GuangpuWang on 2020/4/3.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int cnt = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] != ' ')
            cnt++;
    }
    cout << cnt;
    return 0;
}
