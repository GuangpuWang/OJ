//
// Created by GuangpuWang on 2020/5/28.
//
#include<bits/stdc++.h>

using namespace std;
string s;
stack<int> a;

int main() {
    cin >> s;
    int t = 0;
    for (int i = 0; i < s.length() - 1; ++i) {
        if (isdigit(s[i])) {
            if (t == 1) {
                int tt = a.top();
                a.pop();
                a.push(tt * 10 + s[i] - 48);
            } else {
                t = 1;
                a.push(s[i] - 48);
            }
        } else if (s[i] == '.')
            t = 0;
        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            int t1 = a.top();
            a.pop();
            int t2 = a.top();
            a.pop();
            switch (s[i]) {
                case '+':
                    a.push(t1 + t2);
                    break;
                case '-':
                    a.push(t2 - t1);
                    break;
                case '*':
                    a.push(t1 * t2);
                    break;
                case '/':
                    a.push(t2 / t1);
                    break;
            }
        }
    }
    cout << a.top();
    return 0;
}

