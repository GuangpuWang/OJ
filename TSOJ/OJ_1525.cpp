/*偶数为两个质数的和*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,b,i,j,x,y;
	while(scanf("%d",&n)!=EOF)
	{
		a=1;
		do
		{
			a=a+1;
			b=n-a;
			x=1;
			for(i=2;i<=sqrt(a);i++)
                if(a%i==0)
				{
				    x=0;
				    break;
				}	
			y=1;
			for(j=2;j<=sqrt(b);j++)
				if(b%j==0)
				{
				    y=0;
				    break;
				}
		}while(x==0||y==0);
		printf("%d=%d+%d\n",n,a,b);
	}
	return 0;
}
