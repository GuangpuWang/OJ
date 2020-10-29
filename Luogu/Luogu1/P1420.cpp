//
// Created by GuangpuWang on 2020/3/31.
//
#include <bits/stdc++.h>

using namespace std;
int a[10010];

int main() {
    int n, max = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++) {
        int cnt = 1;
        while(a[i]+1==a[i+1]){
            cnt++;
            i++;
        }
        if (max < cnt)
            max = cnt;
    }
    cout<<max;
    return 0;
}
