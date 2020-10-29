//
// Created by GuangpuWang on 2020/4/5.
//
#include <bits/stdc++.h>

using namespace std;
int rule[5][5] = {{ 0, -1,   1,  1, -1},
                  { 1,  0,  -1,  1, -1},
                  {-1,  1,   0, -1,  1},
                  {-1, -1,   1,  0,  1},
                  { 1,  1,  -1, -1,  0}};
int n, n1, n2, suma = 0, sumb = 0, a[210], b[210];

int main() {
    cin >> n >> n1 >> n2;
    for (int i = 1; i <= n1; ++i)
        cin >> a[i];
    for (int i = 1; i <= n2; ++i)
        cin >> b[i];
    for (int i = 1; i <= n; ++i) {
        int t1 = i, t2 = i;
        t1 = t1 % n1;
        if (t1 == 0)
            t1 = n1;
        t2 = t2 % n2;
        if (t2 == 0)
            t2 = n2;
        if (rule[a[t1]][b[t2]] == 1)
            suma++;
        if(rule[a[t1]][b[t2]] == -1)
            sumb++;
    }
    cout<<suma<<" "<<sumb;
    return 0;
}
