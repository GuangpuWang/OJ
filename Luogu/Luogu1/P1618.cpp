//
// Created by GuangpuWang on 2020/4/9.
//
#include<bits/stdc++.h>

using namespace std;
int a, b, c,cnt;

int main() {
    scanf("%d %d %d", &a, &b, &c);
    int aa[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    do {
        int t1 = aa[0] * 100 + aa[1] * 10 + aa[2];
        int t2 = aa[3] * 100 + aa[4] * 10 + aa[5];
        int t3 = aa[6] * 100 + aa[7] * 10 + aa[8];
        if ((t1 * b == t2 * a) && (t1 * c == t3 * a)){
            printf("%d %d %d\n", t1, t2, t3);
            cnt++;
        }
    } while (next_permutation(aa, aa + 9));
    if(cnt==0)
        printf("No!!!");
    return 0;
}
