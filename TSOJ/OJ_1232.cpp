#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int num=0,t;
		for(int i=0;i<n;i++){
			for(int j=0;j<n-1-i;j++){
				t=a[j];
				if(a[j]>a[j+1]){
					num++;
					a[j]=a[j+1];
					a[j+1]=t;
				}
			}
		}
		cout<<num<<endl;
	}
	return 0;
} 
