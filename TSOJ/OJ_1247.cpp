#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 7371
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int m=0,i;
		i=n;
		while(n)
		{
			m+=1;
			n/=10;
		}
		if(i>=10000&&i<100000)
			printf("22113\n");
		else
			printf("wrong\n");
	}
	return 0;
}
