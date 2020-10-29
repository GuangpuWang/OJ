//
// Created by GuangpuWang on 2020/4/9.
//
#include<bits/stdc++.h>

using namespace std;
int n;
int a[1010], b[1010];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (i > 0) {
            b[i] = abs(a[i] - a[i - 1]);
        }
    }
    for (int i = 1; i <= n - 1; ++i) {
        int flag = 0;
        for (int j = 1; j < n; ++j) {
            if (b[j] == i)
                flag = 1;
        }
        if (flag == 0) {
            printf("Not jolly");
            return 0;
        }
    }
    printf("Jolly");
    return 0;
}
