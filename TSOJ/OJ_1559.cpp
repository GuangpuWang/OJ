#include <iostream>
using namespace std;
int List[50010],ans[50010];
void hahaha()
{
	int i;
	List[0]=1;
	for(i=1;i<=50000;i++)
	{
		List[i]=List[i-1]*2;
		if(List[i]>10000)
			List[i]%=10000;
	}
}
void yingyingying()
{
	int i,j,t=0,T=3; 
	ans[1]=1;ans[2]=3;ans[3]=5;
	for(i=4;i<=50000;i++)
	{
			ans[i]=(2*ans[i-T]+List[T]-1)%10000;
			t++;
			if(t==T)
			{
				t=0;T++;
			}
	}
}
int main()
{
	int n;
	hahaha();
	yingyingying();
	while(cin>>n)
		cout<<ans[n]<<endl;
	return 0;
} 
