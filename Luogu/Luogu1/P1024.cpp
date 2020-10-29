//
// Created by GuangpuWang on 2020/4/18.
//
#include <bits/stdc++.h>

using namespace std;
double a, b, c, d;

double f(double x) {
    return a * x * x * x + b * x * x + c * x + d;
}

int main() {
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    int cnt = 0;
    for (double i = -100; i <= 99; i += 0.005) {
        double j = i + 0.005;
        double ans = f(i) * f(j);
        if (ans <= 0)
            printf("%.2lf ", i);
    }
    return 0;
}


