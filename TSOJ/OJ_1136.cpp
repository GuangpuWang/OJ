#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 100
int main()
{
	char a[N+5],b[N+5];
	while(scanf("%s",a)!=EOF)
	{
		scanf("%s",b);
		int a1[N+5]={0},b1[N+5]={0},c[2*N+10]={0};
		int j;
		j=0;
		for(int i=strlen(a)-1;i>=0;i--)
			a1[j++]=a[i]-'0';
		j=0;
		for(int i=strlen(b)-1;i>=0;i--)
			b1[j++]=b[i]-'0';

		for(int i=0;i<strlen(b);i++)
			for(int j=0;j<strlen(a);j++)
				c[i+j]+=b1[i]*a1[j];
				
		for(int i=0;i<N*2;i++)
			if(c[i]>=10)
			{
				c[i+1]+=c[i]/10;
				c[i]%=10;
			}
		bool m=false;
		for(int i=N*2;i>=0;i--)
		{
			if(m)
				printf("%d",c[i]);
			else if(c[i])
				{
					printf("%d",c[i]);
					m=true;
				}
		}
		printf("\n");
	}
 	return 0; 
}
