//
// Created by GuangpuWang on 2020/4/9.
//
#include<bits/stdc++.h>

using namespace std;
int n, cnt;
queue<int> s[60000];

int main() {
    scanf("%d", &n);
    for (int a = 1; a <= 3; ++a)
        for (int b = 1; b <= 3; ++b)
            for (int c = 1; c <= 3; ++c)
                for (int d = 1; d <= 3; ++d)
                    for (int e = 1; e <= 3; ++e)
                        for (int f = 1; f <= 3; ++f)
                            for (int g = 1; g <= 3; ++g)
                                for (int h = 1; h <= 3; ++h)
                                    for (int i = 1; i <= 3; ++i)
                                        for (int j = 1; j <= 3; ++j)
                                            if (a + b + c + d + e + f + g + h + i + j == n) {
                                                s[cnt].push(a);
                                                s[cnt].push(b);
                                                s[cnt].push(c);
                                                s[cnt].push(d);
                                                s[cnt].push(e);
                                                s[cnt].push(f);
                                                s[cnt].push(g);
                                                s[cnt].push(h);
                                                s[cnt].push(i);
                                                s[cnt].push(j);
                                                cnt++;
                                            }
    printf("%d\n", cnt);
    for (int i = 0; i < cnt; ++i) {
        while (!s[i].empty()) {
            printf("%d ", s[i].front());
            s[i].pop();
        }
        printf("\n");
    }
    return 0;
}
