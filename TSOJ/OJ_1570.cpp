#include<iostream>
#include<string>
using namespace std;
const int N=200;

void fun1(string a,int aa[],int a1) {
	int j=0;
	for(int i=a1-1;i>=0;i--)
		aa[j++]=a[i]-'0';
}

int fun2(int aa[],int bb[],int a1,int b1) {
	int i;
	int t=0;
	if(a1==b1) {
		for(i=a1-1;i>=0;i--) {
			if(aa[i]>bb[i]) t=1;
			else if(aa[i]<bb[i]) {
				if(!t) return -1;
			}
		}
	}
	else if(a1<b1 ) return -1;
	for(i=0;i<a1;i++) {
		aa[i]-=bb[i];
		if(aa[i]<0) {
			aa[i]+=10;
			aa[i+1]--;
		}
	}
	for(i=a1-1;i>=0;i--) {
		if(aa[i]) return i+1;
	}
	return 0;
}

int main() {
	for(int n;cin>>n;) {
	
	for(int k=1;k<=n;k++) {
		string a,b;
		cin>>a;
		cin>>b;
		int a1=a.length(), b1=b.length() ;
		int aa[N+10] = {0}, bb[N+10] = {0}, cc[N+10] = {0};
		fun1( a, aa, a1);
		fun1( b, bb, b1);
		if(a1<b1) {
			cout<<"0"<<endl;
			continue;
		}
		a1=fun2(aa,bb,a1,b1);
		if(a1<0) {
			cout<<"0"<<endl;
			continue;
		}
		
		cc[0]++;
		int c1=a1-b1;
		int i,j;
		if(c1<0)
			goto asdf;
		else if(c1>0) {
			for(i=a1-1;i>=0;i--) {
				if(i>=c1)
					bb[i]=bb[i-c1];
				else bb[i]=0;
			}
		}
		b1=a1;
		for(j=0;j<=c1;j++) {
			int d;
			while((d=fun2(aa,bb+j,a1,b1-j))>=0) {
				a1=d;
				cc[c1-j]++;
			}
		}
		asdf:
			for(i=0;i<N;i++) {
				if(cc[i]>=10) {
					cc[i+1]+=cc[i]/10;
					cc[i]%=10;
				}
			}
			int m=0;
			for(i=N;i>=0;i--) {
				if(m) cout<<cc[i];
				else if(cc[i]) {
					cout<<cc[i];
					m=1;
				}
			}
			if(!m)  cout<<"0"<<endl;
			cout<<endl;
	}
	}
	return 0;
}


