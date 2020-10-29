#include<bits/stdc++.h>

using namespace std;
int n, m;
struct A {
    int id;
    int cj;
} a[5050];

int cmp(A a, A b) {
    if (a.cj != b.cj)
        return a.cj > b.cj;
    else
        return a.id < b.id;
}

int main() {
    scanf("%d %d", &n, &m);
    m = floor(m * 1.5);
    for (int i = 0; i < n; ++i)
        scanf("%d %d", &a[i].id, &a[i].cj);
    sort(a, a + n, cmp);
    int fenshu = a[m - 1].cj;
    int i;
    for (i = 0; i < n; ++i)
        if (a[i].cj < fenshu)
            break;
    printf("%d %d\n", fenshu, i);
    for (int j = 0; j < i; ++j)
        printf("%d %d\n", a[j].id, a[j].cj);
    return 0;
}