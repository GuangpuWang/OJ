//
// Created by GuangpuWang on 2020/3/31.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    double s = (pow(((1 + sqrt(5)) / 2), n) - pow(((1 - sqrt(5)) / 2), n)) / sqrt(5);
    printf("%.2f", s);
    return 0;
}