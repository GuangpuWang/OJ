/*大数位数*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	while(scanf("%d",&n)!=EOF)
	{
	    double j=1.0;
	    for(i=1;i<=n;i++)    j=j+log10(i);
		printf("%d\n",(int)j);
	}
	return 0;
}
