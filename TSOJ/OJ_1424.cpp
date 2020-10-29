#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		int b,sum=0,i=0,j=0;
		int M[500];
		while(1)
		{
			b=pow(2,i)*pow(3,j);
			if(b<=n)   { M[sum]=b; sum++; i++; }
			else { i=0; j++; }
			if(pow(3,j)>n)  break;
			else   continue;
		}
		sort(M,M+sum);
		cout<<sum<<endl<<M[m-1]<<endl;
	}
	return 0;
}
