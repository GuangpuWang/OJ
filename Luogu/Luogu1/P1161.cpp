#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, t,ans = 0;
    cin >> n;
    double a;
    for (int i = 1; i <= n; i++) {
        cin >> a >> t;
        for (int j = 1; j <= t; j++)
            ans =ans ^int(j * a);
    }
    cout << ans << endl;
    return 0;
}