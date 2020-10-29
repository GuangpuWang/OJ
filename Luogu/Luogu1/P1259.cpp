//
// Created by GuangpuWang on 2020/4/14.
//
#include<bits/stdc++.h>

using namespace std;
int n;
char a[250];

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
        a[i] = 'o';
    for (int i = n + 1; i <= 2 * n; ++i)
        a[i] = '*';
    a[2 * n + 1] = a[2 * n + 2] = '-';
    int m = n, r = 2 * n + 1;
    while (m >= 4) {
        for (int i = 1; i <= 2 * n + 2; ++i)
            printf("%c", a[i]);
//        printf("   %d", m);
        printf("\n");
        swap(a[m], a[r]);
        swap(a[m + 1], a[r + 1]);
        for (int i = 1; i <= 2 * n + 2; ++i)
            printf("%c", a[i]);
        printf("\n");
        for (int i = m; i <= 2 * m - 2; ++i)
            a[i] = a[i + 2];
        a[2 * m - 1] = a[2 * m] = '-';
        r -= 2;
        m--;
    }
    string s[5] = {"ooo*o**--*", "o--*o**oo*", "o*o*o*--o*", "--o*o*o*o*"};
    for (int i = 0; i < 4; ++i) {
        for (int j = 1; j <= n - 4; ++j)
            s[i] = s[i] + "o*";
        cout << s[i] << endl;
    }
    return 0;
}

