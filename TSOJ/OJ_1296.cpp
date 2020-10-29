#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

char array[1000][1000];

void fun1(int n,int x,int y) {
	if(n==1)
		array[x][y]='X';
	if(n!=1) {
		int m=static_cast<int>(pow(3,n-2));
		fun1(n-1,x+2*m,y);
		fun1(n-1,x+m,y+m);
		fun1(n-1,x,y);
		fun1(n-1,x,y+2*m);
		fun1(n-1,x+2*m,y+2*m);
	}
}
int main() {
	for(int n;cin>>n;) {
		int m=static_cast<int>(pow(3,n-1));
		for(int i=0;i<m;++i)
			for(int j=0;j<m;++j)
				array[i][j]=' ';
		fun1(n,0,0);
		for(int i=0;i<m;++i) {
			for(int j=0;j<m;++j)
				cout<<array[i][j];
			cout<<"\n";
		}
		cout<<"-"<<endl;
	}
	return 0;
}
