#include<iostream>
#include<algorithm>
using namespace std;

int a[1000]={0};

int fun2(int m) {
	int sum=0;
	for(int i=0;i<=m;++i) {
		sum*=10;
		sum+=a[i];
		sum%=(m+1);
	}
	if(sum==0)
		return 1;
	else 
		return 0;
}

void fun1(int m,int n) {
	if(m==n-1&&fun2(m)) {
		for(int i=0;i<n;++i)
			cout<<a[i];
		cout<<endl;
	}
	if(fun2(m)) {
		for(int i=0;i<10;i++) {
			a[m+1]=i;
			fun1(m+1,n);
		}
	}
}

void fun(int n) {
	for(int i=1;i<10;++i) {
			a[0]=i;
			fun1(0,n);
		}
}

int main() {
	for(int n;cin>>n;) {
		fun(n);
	}
	return 0;
}
