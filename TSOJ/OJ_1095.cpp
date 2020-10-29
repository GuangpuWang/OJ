#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int T;
	while(cin>>T){
		while(T--){
			int n;
			int sum=0,num=0,max=0,min=110;
			while(cin>>n&&n!=-1){
				num++;
				sum+=n;
				if(n>max) max=n;
				if(n<min) min=n;
			}
			cout<<num<<endl<<max<<endl<<min<<endl<<fixed<<setprecision(1)<<sum/(num+0.0)<<endl;
		}
	}
	return 0;
}
