#include<iostream>
using namespace std;
int fun(int a,int b){
	int t=0;
	while(b){
		t=a%b;
		a=b;
		b=t;
	}
	return a;
}
int main(){
	int n;
	while(cin>>n){
		while(n--){
			int a,b;
			cin>>a>>b;
			cout<<a*b/fun(a,b)<<endl;
		}
	}
	return 0;
}
