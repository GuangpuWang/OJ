//
// Created by GuangpuWang on 2020.3.24.
//
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    double sum = 0;
    if (n <= 150)
        printf("%.1f", n * 0.4463);
    else if (n <= 400)
        printf("%.1f", 150 * 0.4463 + (n - 150) * 0.4663);
    else
        printf("%.1f", 150 * 0.4463 + 250 * 0.4663 + (n - 400) * 0.5663);
    return 0;
}