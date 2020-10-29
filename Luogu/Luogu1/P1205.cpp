//
// Created by GuangpuWang on 2020/4/2.
//
#include <bits/stdc++.h>

using namespace std;
char a[15][15], b[15][15], c[15][15], d[15][15];
int n;

int f1() {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            c[j][n - 1 - i] = a[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (b[i][j] != c[i][j])
                return 0;
    return 1;
}

int f2() {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            c[n - 1 - i][n - 1 - j] = a[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (b[i][j] != c[i][j])
                return 0;
    return 1;
}

int f3() {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            c[n - 1 - j][i] = a[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (b[i][j] != c[i][j])
                return 0;
    return 1;
}

int f4() {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            c[i][n - 1 - j] = a[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (b[i][j] != c[i][j])
                return 0;
    return 1;
}

int f5() {
    f4();
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = c[i][j];
    if (f1() == 1 || f2() == 1 || f3() == 1)
        return 1;
    return 0;
}

int f6() {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (b[i][j] != c[i][j])
                return 0;
    return 1;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            d[i][j] = a[i][j];
        }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> b[i][j];
    if (f1() == 1)
        cout << 1;
    else if (f2() == 1)
        cout << 2;
    else if (f3() == 1)
        cout << 3;
    else if (f4() == 1)
        cout << 4;
    else if (f5() == 1)
        cout << 5;
    else if (f6() == 1)
        cout << 6;
    else
        cout << 7;
    return 0;
}