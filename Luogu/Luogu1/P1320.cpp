//
// Created by GuangpuWang on 2020/4/1.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    string s = "", ss;
    cin >> ss;
    s = s + ss;
    for (int i = 2; i <= ss.length(); i++) {
        cin >> ss;
        s = s + ss;
    }
    cout << ss.length();
    int cnt = 0;
    if(s[0]!='0')
        cout<<" "<<0;
    for (int i = 0; i < s.length(); i++) {
        if (i < s.length() - 1) {
            int t = s[i] - '0' + s[i + 1] - '0';
            if (t == 0) {
                cnt++;
            } else if (t == 1) {
                cout << " " << ++cnt;
                cnt = 0;
            } else if (t == 2) {
                cnt++;
            }
        } else {
            if (s[i] == s[i - 1]) {
                cnt++;
                cout << " " << cnt;
            } else {
                cout << " " << 1;
            }
        }
    }
    return 0;
}
