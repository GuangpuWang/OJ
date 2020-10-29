//
// Created by GuangpuWang on 2020/4/16.
//
#include<bits/stdc++.h>

using namespace std;
int a[100010], n, cnt = 1;
queue<int> b[100010];

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    sort(a + 1, a + 1 + n);
    b[cnt].push(a[1]);
    for (int i = 2; i <= n; i++) {
        int flag = 0;
        for (int j = cnt; j >= 1; --j) {
            if (b[j].back() + 1 == a[i]) {
                b[j].push(a[i]);
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            b[++cnt].push(a[i]);
    }
    int minlen = 200000;
//    printf("%d\n",cnt);
//    for (int i = 1; i <= cnt; ++i){
//        while(!b[i].empty()){
//            printf("%d ",b[i].front());
//            b[i].pop();
//        }
//        printf("\n");
//    }
    for (int i = 1; i <= cnt; ++i) {
        if (minlen > b[i].size())
            minlen = b[i].size();
    }
    printf("%d", minlen);
    return 0;
}

