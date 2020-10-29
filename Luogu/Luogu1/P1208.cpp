//
// Created by GuangpuWang on 2020/4/16.
//
#include<bits/stdc++.h>
using namespace std;
int n,m,sum;
struct A{
    int per;
    int num;
}a[5010];
int cmp(A a,A b){
    return a.per<b.per;
}
int main(){
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m;++i)
        scanf("%d %d",&a[i].per,&a[i].num);
    sort(a+1,a+1+m,cmp);
    for(int i=1;i<=m;++i){
        if(n-a[i].num>0){
            sum+=a[i].per*a[i].num;
            n-=a[i].num;
        }
        else{
            sum+=a[i].per*n;
            break;
        }
    }
    printf("%d",sum);
    return 0;
}

