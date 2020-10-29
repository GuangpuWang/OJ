#include<iostream>
using namespace std;
int fun(int m,int n){
	int a=0;
	if(n==0||m==n){
		a=1;
	}
	else{
		a=fun(m-1,n-1)+fun(m-1,n);
	}
	return a;
}
int main(){
	int m,n;
	while(cin>>m>>n){
		cout<<fun(m,n)<<endl;
	}
	return 0;
}
