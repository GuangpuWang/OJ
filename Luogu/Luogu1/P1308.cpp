//
// Created by GuangpuWang on 2020/4/3.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    string a, s;
    getline(cin, a);
    getline(cin, s);
    for (int i = 0; i < a.length(); i++)
        if (a[i] >= 'A' && a[i] <= 'Z')
            a[i] = char(a[i] + 32);
    a = ' ' + a + ' ';
    for (int i = 0; i < s.length(); i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = char(s[i] + 32);
    s = ' ' + s + ' ';
    int pos = s.find(a);
    int ans = pos;
    if (pos == -1) {
        cout << pos;
        return 0;
    }
    int cnt = 0;
    while (pos != -1) {
        cnt++;
        pos = s.find(a, pos + 1);
    }
    cout << cnt << " " << ans;
    return 0;
}
