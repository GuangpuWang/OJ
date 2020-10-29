//
// Created by GuangpuWang on 2020/3/31.
//
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int sum1 = 0, sum2 = 0, num1 = 0, num2 = 0;
    for (int i = 1; i <= n; ++i) {
        if (i % k == 0) {
            sum1 += i;
            num1++;
        } else {
            sum2 += i;
            num2++;
        }
    }
    double result1 = 1.0 * sum1 / num1, result2 = 1.0 * sum2 / num2;
    printf("%.1f %.1f", result1, result2);
    return 0;
}