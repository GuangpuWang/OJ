/*ì³²¨ÄÇÆõÊýÁÐ*/
#include<stdio.h>
int feibonaqi(int a)
{
	int b;
	if(a==1||a==2)  b=1;
	else            b=feibonaqi(a-1)+feibonaqi(a-2);
	return b;
}
int main()
{
	int n,m,i,count=0;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=1;i<=n;i++)
		{
			m=feibonaqi(i);
			printf("%12d",m);
			count=count+1;
			if(count%4==0)    printf("\n");
		}
		printf("\r");
	}
	return 0;
}

