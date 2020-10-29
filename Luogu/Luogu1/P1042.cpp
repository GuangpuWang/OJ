//
// Created by GuangpuWang on 2020/4/4.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    char c;
    string s = "";
    while (cin >> c) {
        if (c == 'E')
            break;
        s = s + c;//放到一个字符串里
    }

    if (s == "") {  //第一个字母是'E'
        cout << "0:0" << endl << endl << "0:0";
        return 0;
    }

    for (int i = 0; i < s.length(); i++) {
        int j = i, win = 0, lose = 0;
        while ((win != 11 && lose != 11) && j < s.length()) {
            if (s[j] == 'W')
                win++;
            else if (s[j] == 'L')
                lose++;
            j++;
        }
        while (abs(win - lose) < 2 && j < s.length()) {
            if (s[j] == 'W')
                win++;
            else if (s[j] == 'L')
                lose++;
            j++;
        }
        cout << win << ":" << lose << endl;
        if (j == s.length() && (win >= 11 || lose >= 11) && abs(win - lose) >= 2)
            cout << "0:0" << endl;
        i = j - 1;
    }
    cout << endl;
    for (int i = 0; i < s.length(); i++) {
        int j = i, win = 0, lose = 0;
        while ((win != 21 && lose != 21) && j < s.length()) {
            if (s[j] == 'W')
                win++;
            else if (s[j] == 'L')
                lose++;
            j++;
        }
        while (abs(win - lose) < 2 && j < s.length()) {
            if (s[j] == 'W')
                win++;
            else if (s[j] == 'L')
                lose++;
            j++;
        }
        cout << win << ":" << lose << endl;
        if (j == s.length() && (win >= 21 || lose >= 21) && abs(win - lose) >= 2)
            cout << "0:0" << endl;
        i = j - 1;
    }
    return 0;
}