//
// Created by GuangpuWang on 2020/4/9.
//
#include<bits/stdc++.h>

using namespace std;
long long int m, n, sum1 = 0, sum2 = 0;

int main() {
    scanf("%d %d", &n, &m);
    long long int t = min(m, n);
    sum1 = m * (m + 1) / 2 * n * (n + 1) / 2;//矩形个数
    for (int i = 1; i <= t; ++i)
        sum2 += (m + 1 - i) * (n + 1 - i);//正方形个数
    printf("%lld %lld", sum2, sum1 - sum2);
    return 0;
}
