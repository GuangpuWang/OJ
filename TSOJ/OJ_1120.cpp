#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 200
int main()
{
	char a[N],b[N];
	while(scanf("%s",a)!=EOF)
	{
		scanf("%s",b);
		int a1[N+10],b1[N+10];
		memset(a1,0,sizeof(a1));
		memset(b1,0,sizeof(b1));
		int j;
		j=0;
		for(int i=strlen(a)-1;i>=0;i--)
			a1[j++]=a[i]-'0';
		j=0;
		for(int i=strlen(b)-1;i>=0;i--)
			b1[j++]=b[i]-'0';

		for(int i=0;i<=N;i++)
		{
			a1[i]+=b1[i];
			if(a1[i]>=10)
			{
				a1[i]-=10;
				a1[i+1]++;
			}
		}
		bool m=false;
		for(int i=N;i>0;i--)
		{
			if(m)
				printf("%d",a1[i]);
			else if(a1[i])
				{
					printf("%d",a1[i]);
					m=true;
				}
		}
		printf("%d\n",a1[0]);
	}
 	return 0; 
}
