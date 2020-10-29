//
// Created by GuangpuWang on 2020/4/24.
//
#include <bits/stdc++.h>

using namespace std;
int k;

int main() {
    scanf("%d", &k);
    int f = 0;
    for (int i = 10000; i <= 30000; ++i) {
        int t1 = i / 100;
        int t2 = (i / 10) % 1000;
        int t3 = i % 1000;
        if (t1 % k == 0 && t2 % k == 0 && t3 % k == 0) {
            f = 1;
            printf("%d\n", i);
        }
    }
    if (f == 0)
        printf("No");
    return 0;
}
