#include<iostream>
#include<cmath>
using namespace std;
const double PI=3.141592653;
const double E=2.71828182846;
int main(){
	int n;
	while(cin>>n){
		while(n--){
			int m;
			cin>>m;
			cout<<(int)(log10(2*PI*m)/2+m*log10(m/E)+1)<<endl;
		}
	}
	return 0;
} 
