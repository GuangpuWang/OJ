//
// Created by GuangpuWang on 2020/4/9.
//
#include<bits/stdc++.h>

using namespace std;
int n;
struct Stu {
    int id;
    int chinese;
    int math;
    int english;
    int sum;
};
Stu a[310];

int cmp(Stu a, Stu b) {
    if (a.sum != b.sum)
        return a.sum > b.sum;
    else if (a.chinese != b.chinese)
        return a.chinese > b.chinese;
    else
        return a.id < b.id;
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        a[i].id = i;
        scanf("%d %d %d", &a[i].chinese, &a[i].math, &a[i].english);
        a[i].sum = a[i].chinese + a[i].math + a[i].english;
    }
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= 5; ++i)
        printf("%d %d\n", a[i].id, a[i].sum);
    return 0;
}
