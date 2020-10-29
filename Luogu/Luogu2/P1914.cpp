//
// Created by GuangpuWang on 2020/4/2.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        n = n % 26;
        int t = s[i] + n;
        if (t > 122)
            t -=26;
        cout<<(char)t;
    }
    return 0;
}
