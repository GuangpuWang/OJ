#include<iostream>
#include<cstdlib> 
using namespace std;
int comp(const void *a,const void *b)
{
	if(((int*)a)[0]<((int*)b)[0])
		return -1;
	else return 1;
}

int main(){
	int m,n;
	while(cin>>m>>n){
		int money=0;
		int a[n][2];
		for(int i=0;i<n;i++){
			for(int j=0;j<2;j++){
				cin>>a[i][j];
			}
		}
		
		qsort(a,n,sizeof(int)*2,comp); 
		
		for(int i=0;i<n&&m>0;i++){
			if(a[i][1]>=m){
				money+=a[i][0]*m;
				m-=a[i][1];
				break;
			}
			else{
				money+=a[i][0]*a[i][1];
				m-=a[i][1];
			}
		}
		cout<<money<<endl;
	}
	return 0;
}
