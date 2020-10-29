//
// Created by GuangpuWang on 2020/4/9.
//
#include<bits/stdc++.h>

using namespace std;
int n;
struct A {
    int x, y, z;
} a[50050];

int cmp(A a, A b) {
    return a.z < b.z;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
        scanf("%d %d %d", &a[i].x, &a[i].y, &a[i].z);
    sort(a, a + n, cmp);
    double s = 0;
    for (int i = 1; i < n; ++i)
        s += sqrt((a[i].x - a[i - 1].x) * (a[i].x - a[i - 1].x) + (a[i].y - a[i - 1].y) * (a[i].y - a[i - 1].y)
                  + (a[i].z - a[i - 1].z) * (a[i].z - a[i - 1].z));
    printf("%.3f", s);
    return 0;
}
