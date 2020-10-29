//
// Created by GuangpuWang on 2020/4/4.
//
#include <bits/stdc++.h>

using namespace std;
int num[30], cnt[30];//num统计每个字母出现多少次  cnt统计每列上面多少空格

int main() {
    string s;
    for (int i = 1; i <= 4; ++i) {
        getline(cin, s);
        for (int j = 0; j < s.length(); j++) {
            if (s[j] >= 'A' && s[j] <= 'Z')
                num[s[j] - 'A']++;
        }
    }
    int max = 0;
    for (int i = 0; i <= 25; i++)
        if (num[i] > max)
            max = num[i];           //最大次数
    for (int i = 0; i <= 25; ++i)
        cnt[i] = max - num[i];
    for (int i = 1; i <= max; ++i) {
        for (int j = 0; j <= 25; j++) {
            if (cnt[j] != 0) {
                cout << " ";
                cnt[j]--;
            } else
                cout << "*";
            if (j < 25)
                cout << " ";
        }
        cout << endl;
    }
    for (int i = 1; i <= 25; i++)
        cout << char(64 + i) << " ";
    cout << "Z";
    return 0;
}