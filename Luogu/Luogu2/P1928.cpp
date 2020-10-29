//
// Created by GuangpuWang on 2020/4/13.
//
#include<bits/stdc++.h>

using namespace std;
string s, ans;

int main() {
    cin >> s;
    stack<char> a;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] != ']')
            a.push(s[i]);
        else {
            string t, t1;
            while (a.top() != '[') {
                t = a.top() + t;
                a.pop();
            }
            a.pop();
//			cout<<t<<endl;
            int num = t[0] - '0', flag = 1;
            if (t[1] >= '0' && t[1] <= '9') {//次数大于等于10
                num = num * 10 + t[1] - '0';
                flag += 1;
            }
            for (int i = 1; i <= num; ++i) {
                for (int j = flag; j < t.length(); ++j)
                    t1 += t[j];
            }
//			cout<<t1<<endl;
            for (int i = 0; i < t1.length(); ++i)
                a.push(t1[i]);
        }
    }
    while (!a.empty()) {
        ans = a.top() + ans;
        a.pop();
    }
    cout << ans;
    return 0;
}
