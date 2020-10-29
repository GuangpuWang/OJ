//
// Created by GuangpuWang on 2020/4/9.
//
#include<bits/stdc++.h>

using namespace std;
int n, k, a[25], b[25], cnt;

int prime(int n) {
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return 0;
    return 1;
}

void f(int m) {
    if (m == n) {
        int t = 0, sum = 0;
        for (int i = 0; i < n; i++)
            if (b[i] == 1)
                t++;
        if (t == k) {
            for (int i = 0; i < n; ++i)
                if (b[i] == 1)
                    sum += a[i];
            if (prime(sum) == 1)
                cnt++;
        }
    } else {
        b[m] = 1;
        f(m + 1);
        b[m] = 0;
        f(m + 1);
    }
}

int main() {
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    f(0);
    printf("%d", cnt);
    return 0;
}
