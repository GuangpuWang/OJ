//
// Created by GuangpuWang on 2020/4/15.
//
#include <bits/stdc++.h>

char c[260];

int main() {
    int len, k;
    scanf("%s%d", c, &k);
    len = strlen(c);
    while (k--) {
        for (int i = 0; i <= len - 2; i++)
            if (c[i] > c[i + 1]) {
                for (int j = i; j <= len - 2; j++)
                    c[j] = c[j + 1];
                break;
            }
        len--;
    }
    int i = 0;
    while (i <= len - 1 && c[i] == '0')
        i++;
    if (i == len)
        printf("0");
    else
        for (int j = i; j <= len - 1; j++)
            printf("%c", c[j]);
    return 0;
}

