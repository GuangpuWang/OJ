//
// Created by GuangpuWang on 2020/4/19.
//
#include <bits/stdc++.h>

using namespace std;
int m,n,a[100050];
long long int ans;
int main() {
    scanf("%d%d",&m,&n);
    for(int i=1;i<=m;++i)
        scanf("%d",&a[i]);
    sort(a+1,a+1+m);
    while(n--){
        int t;
        scanf("%d",&t);
        int p=lower_bound(a+1,a+1+m,t)-a;
        if(p==m+1)
            ans+=t-a[m];
        else if(p==1){
            ans+=a[1]-t;
        }
        else
            ans+=min(abs(a[p]-t),abs(t-a[p-1]));
    }
    printf("%lld",ans);
    return 0;
}


