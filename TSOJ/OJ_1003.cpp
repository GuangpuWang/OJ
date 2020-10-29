#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		string a;
		cin>>a;
		char b[100];
		int i,j=0;
		while(i<a.length()){
			if(a[i]!='*'&&a[i]!='/'){
				b[j++]=a[i];
				i++;
			}
			if(a[i]=='*'){
				b[j-1]=(a[i-1]-'0')*(a[i+1]-'0')+'0';
				i+=2;
			}
			if(a[i]=='/'){
				b[j-1]=(a[i-1]-'0')/(a[i+1]-'0')+'0';
				i+=2;
			}
		}
		i=1;
		int sum=b[0];
		while(i<j){
			if(b[i]=='+'){
				sum+=b[i++];
			}
			if(b[i]=='-'){
				sum-=b[i++];
			}
		}
		cout<<sum<<endl;
	}
	return 0;
} 
