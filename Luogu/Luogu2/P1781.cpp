#include<bits/stdc++.h>

using namespace std;
int n;
struct A {
    int id;
    string s;
    int cnt;
} a[110];

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        a[i].id = i;
        cin >> a[i].s;
        a[i].cnt = a[i].s.length();
    }
    int t = 0, maxlen = 0;
    for (int i = 1; i <= n; ++i) {
        if (a[i].cnt > maxlen) {
            t = i;
            maxlen = a[i].cnt;
        } else if (a[i].cnt == maxlen) {
            int ii = a[i].s.compare(a[t].s);
            if (ii > 0)
                t = i;
        }
    }
    cout << t << endl << a[t].s;
    return 0;
}