//
// Created by GuangpuWang on 2020/4/3.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, cnt1 = 0, cnt2 = 0;
    cin >> n;
    string s;
    cin >> s;
    //不改变 结果为cnt1
    int pos = s.find("VK");
    while (pos != -1) {
        cnt1++;
        pos = s.find("VK", pos + 1);
    }
    //改变 结果为cnt2
    for (int i = 0; i < s.length(); ++i) {
        int t = 0;
        char c = s[i];
        s[i] = 'V';
        int pos = s.find("VK");
        while (pos != -1) {
            t++;
            pos = s.find("VK", pos + 1);
        }
        if (cnt2 < t)
            cnt2 = t;
        t = 0;
        s[i] = 'K';
        pos = s.find("VK");
        while (pos != -1) {
            t++;
            pos = s.find("VK", pos + 1);
        }
        if (cnt2 < t)
            cnt2 = t;
        s[i] = c;
    }
    cout << max(cnt1, cnt2);
    return 0;
}

