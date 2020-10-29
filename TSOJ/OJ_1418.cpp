/*高阶水仙花数*/
#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int n,i,a,b,j,x,y;
	while(scanf("%d",&n)!=EOF)
	{
	    a=pow(10,n-1);
	    b=pow(10,n);
	    for(i=a;i<b;i++)
	    {
	        j=i;
	        x=0;
	        while(j!=0)
	        {
	    	    y=j%10;
	    	    x=x+pow(y,n);
	    	    j=j/10;
		    }
		    if(i==x)    printf("%d\n",i);
	    }
	}
	return 0;
}
