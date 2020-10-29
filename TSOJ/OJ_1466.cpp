#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int a[10010]={0},k[10010]={0},t[10010]={0};

void fun2(int a[],int t[],int &m,int n)
{
	memset(k,0,sizeof(k));
	for(int i=0;i<m;++i) {
		int u=0; 
		for(int j=0;j<n;++j) {
			k[i+j]+=a[i]*t[j]+u; 
			u=k[i+j]/10;
			k[i+j]%=10;
		}
		k[i+n]+=u; 
	}
	for(int i=10009;i>=0;--i) {
		a[i]=k[i];
	}
	for(int i=10009;i>=0;--i) {
		if(a[i]!=0){
			m=i+1;
			break;
		}
	}
}

class A {
	public:
		int fun1();
	private:
		int i;
};

int A::fun1() {
	for(int m;cin>>m;) {
	for(int i=1;i<=m;++i) {
		memset(a,0,sizeof(a));
		memset(t,0,sizeof(t));
		string c;
		int b;
		cin>>c>>b;
		if(b==0) {
			cout<<"1"<<endl;
			continue;
		}
		int flag=0;
		int e=c.length();
		for(int i=0;i<e;++i) {
			if(c[i] == '.') {
				flag=1;
				break;
			}
		}
		if(flag) {
			for(int i=e-1;i>=0;--i) {
				if(c[i]!='0') {
					e=i+1;
					break;
				}
			}
		}
		int now=0;
		int p;
		for(int i=e-1;i>=0;--i) {		
			if(c[i]=='.'){
				p=e-i-1;
				continue;
			}
			a[now]=c[i]-'0';
			t[now]=c[i]-'0';
			now++;
		}
		for(int i=10009;i>=0;--i) {
			if(a[i]!=0){
				now=i+1;
				break;
			}
		}
		int l=p;
		int x=now;
		for(int i=0;i<b-1;++i) {
			fun2(a,t,x,now);
			l+=p;
		}
		if(x<=l) {
			cout<<'.';
			for(int i=0;i<l-x;++i)
				cout<<"0";
			for(int i=x-1;i>=0;--i)
				cout<<a[i];
		}
		else {
			for(int i=x-1;i>=0;--i) {
				if(flag&&i==l-1)
					cout<<'.';
				cout<<a[i]; 
			} 
		}
		cout<<"\n";
	}
	cout<<"\n"; 
}
}

int main() {
	A aa;
	aa.fun1() ;
	return 0;
} 
