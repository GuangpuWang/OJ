//
// Created by GuangpuWang on 2020/4/9.
//
#include<bits/stdc++.h>

using namespace std;
int n;

int cmp(string a, string b) {
    int i = 0, j = 0;
    while (a[i] == b[j]) {
        i++;
        j++;
        if (i == a.length())
            i = 0;
        if (j == b.length())
            j = 0;
    }
    return a[i] > b[j];
}

int main() {
    scanf("%d", &n);
    string a[25];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; ++i)
        cout << a[i];
    return 0;
}
