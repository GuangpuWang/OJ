#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int fun(int n)
{
    do
    {
        int m;
        m=n%10;
        if(m==2||m==4) return 0;
        n/=10;
    }while(n);
    return 1;
}
int main()
{
    for(int n;cin>>n;)
    {
        int num=0;
        for(int i=1;i<n-2;i++)
            for(int j=i+1;j<n-i-j;j++)
                if(fun(i)&&fun(j)&&fun(n-i-j)) num+=1;
        cout<<num<<endl;
    }
    return 0;
}
