#include<stdio.h>
#include<math.h>
#include<string.h>
long fun(char a[],int m)
{
	int x=0;
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]-'0'>=m)
			return 0;
		x=x*m;
		x+=a[i]-'0';
	}
	return x;
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		char a[100],b[100],c[100];
		scanf("%s%s%s",a,b,c);
		int m;
		for(m=2;m<=16;m++)
		{
			long a1,b1,c1;
			a1=fun(a,m);
			b1=fun(b,m);
			c1=fun(c,m);
			if(a1==0||b1==0||c1==0)
				continue;
			if(a1*b1==c1)
			{
				printf("%d\n",m);
				break;
			}
		}
		if(m==17)  printf("0\n");
	}
 	return 0; 
}
