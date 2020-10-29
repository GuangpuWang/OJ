#include<iostream>
#include<iomanip>
using namespace std;
int fun1(int n){
	int a;
	if(n==1) a=1;
	if(n==2) a=2;
	if(n>2)  a=fun1(n-1)+fun1(n-2);
	return a;
}
int fun2(int n){
	int a;
	if(n==1) a=2;
	if(n==2) a=3;
	if(n>2)  a=fun2(n-1)+fun2(n-2);
	return a;
}
int main(){
	int n;
	while(cin>>n){
		double sum=0.0;
		int t=1;
		for(int i=1;i<=n;i++){
			sum+=fun2(i)*1.0/fun1(i)*t;
			t=-t;
		}
		cout<<fixed<<setprecision(4)<<sum<<endl;
	}
	return 0;
}
