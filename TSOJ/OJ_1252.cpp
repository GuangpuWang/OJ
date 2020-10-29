#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		int a[n][n];
		memset(a,0,sizeof(a));
		int m=1;
		while(m<=n){
			for(int i=n-1;i>=0;i--){
				for(int j=n-1;j>=0;j--){
					if(a[i][j]==0&&(i==n-m||j==n-m))
						a[i][j]=m;
				}
			}
			m++;
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
