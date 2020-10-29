//
// Created by GuangpuWang on 2020/4/4.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int sum = 0, cnt = 0, n = 0;
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] >= '0' && s[i] <= '9') {
            n = n * 10 + s[i] - '0';
        }
        if (s[i] == ' ' || i == s.length() - 1) {
            sum += n;
            cnt++;
            n = 0;
        }
    }
    long long int p = pow(2, cnt - 1);
    long long int ans = p * sum;
    cout << ans;
    return 0;
}
