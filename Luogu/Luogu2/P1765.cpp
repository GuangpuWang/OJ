//
// Created by GuangpuWang on 2020/4/3.
//
#include<bits/stdc++.h>

using namespace std;
int num[26] = {1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4};

int main() {
    int cnt = 0;
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ')
            cnt++;
        else if (s[i] >= 'a' && s[i] <= 'z')
            cnt += num[s[i] - 'a'];
    }
    cout << cnt;
    return 0;
}