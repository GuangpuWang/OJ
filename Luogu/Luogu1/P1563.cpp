//
// Created by GuangpuWang on 2020/4/5.
//
#include <bits/stdc++.h>

using namespace std;
int n, m;

int f(int num) {
    if (num >= 0)
        num = num % n;
    else
        num = (num % n + n) % n;
    if (num == 0)
        num = n;
    return num;
}

int main() {

    cin >> n >> m;
    string a[n + 10][3];
    int b[m + 10][3];
    for (int i = 1; i <= n; ++i)
        cin >> a[i][1] >> a[i][2];
    int num = 1;
    for (int i = 1; i <= m; ++i) {
        cin >> b[i][1] >> b[i][2];
        if (b[i][1] == 0) {
            if (a[num][1] == "1")
                num = num + b[i][2];
            else if (a[num][1] == "0")
                num = num - b[i][2];
            num = f(num);
        } else if (b[i][1] == 1) {
            if (a[num][1] == "1")
                num = num - b[i][2];
            else if (a[num][1] == "0")
                num = num + b[i][2];
            num = f(num);
        }
//        cout << num << endl;
    }
    cout << a[num][2];
    return 0;
}
