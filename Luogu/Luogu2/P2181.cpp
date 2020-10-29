//
// Created by WGP on 2020/3/23.
//
#include <iostream>
#include <stdio.h>
using namespace std;
unsigned long long n, ans;

int main() {
    scanf("%lld", &n);
    ans = n * (n - 1) / 2 * (n - 2) / 3 * (n - 3) / 4;
    printf("%lld", ans);
    return 0;
}
