//
// Created by GuangpuWang on 2020/4/6.
//
#include <bits/stdc++.h>

using namespace std;
int a[110];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n + 1; ++i) {
        cin >> a[i];
        if (a[i] == 0)     //系数为0
            continue;
        else {
            if (a[i] < 0) {
                if (a[i] == -1) {
                    cout << "-";
                    if (i == n + 1)
                        cout << 1;
                } else
                    cout << a[i];
            }
            if (a[i] > 0) {
                if (a[i] != 1) {
                    if (i == 1)
                        cout << a[i];
                    else {
                        int flag = 0;
                        for (int j = 1; j < i; ++j)
                            if (a[j] != 0)
                                flag = 1;
                        if (flag == 1)
                            cout << "+" << a[i];
                        else
                            cout << a[i];
                    }
                } else {
                    int flag = 0;
                    for (int j = 1; j < i; ++j)
                        if (a[j] != 0)
                            flag = 1;
                    if (flag == 1)
                        cout << "+";
                    if(i==n+1)
                        cout<<1;
                }
            }
            if (i == n)
                cout << "x";
            else if (i == n + 1)
                continue;
            else
                cout << "x^" << n + 1 - i;
        }
    }
    if (n == 0 && a[1] == 0)
        cout << 0;
    return 0;
}