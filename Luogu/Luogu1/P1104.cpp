//
// Created by GuangpuWang on 2020/4/9.
//
#include<bits/stdc++.h>

using namespace std;
int n;
struct A {
    string s;
    int year, month, day, id;
} a[110];

int cmp(A a, A b) {
    if (a.year != b.year)
        return a.year < b.year;
    else if (a.month != b.month)
        return a.month < b.month;
    else if (a.day != b.day)
        return a.day < b.day;
    else
        return a.id > b.id;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i].s >> a[i].year >> a[i].month >> a[i].day;
        a[i].id = i;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; ++i)
        cout << a[i].s << endl;
    return 0;
}
