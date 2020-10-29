//
// Created by GuangpuWang on 2020/4/3.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    while (n--) {
        int num;
        cin >> num;
        if (num == 1) {
            string str;
            cin >> str;
            s = s + str;
            cout << s << endl;
        } else if (num == 2) {
            int a, b;
            cin >> a >> b;
            s = s.substr(a, b);
            cout << s << endl;
        } else if (num == 3) {
            int a;
            string str, t1, t2;
            cin >> a >> str;
            t1 = s.substr(0, a);
            t2 = s.substr(a);
            s = t1 + str + t2;
            cout << s << endl;
        } else if (num == 4) {
            string str;
            cin >> str;
            int ans=s.find(str);
            cout << ans << endl;
        }
    }
    return 0;
}
