#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int m,n;
	while(cin>>m>>n){
		double a=m/(n+0.0)*100;
		int b=(int)(a+0.5);
		cout<<fixed<<setprecision(2)<<b/100.0<<endl;
	}
	return 0;
}
