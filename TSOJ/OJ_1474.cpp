#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	for(long long int n;cin>>n;)
	{
		long long int a[100];
		for(long long int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		long long int i=0,j=n;
		while(i<=2*n-4)
		{
			a[j++]=a[i]*a[i+1]+1;
			sort(a,a+j);
			i+=2;
		}
		cout<<a[j-1]<<endl;
	}
	return 0;
}
