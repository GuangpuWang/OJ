/*各个位数的和与积相等*/
#include<stdio.h>
int main()
{
	int n,i,a,b,c;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    a=0;
	    b=1;
	    c=i;
	    do
 	    {
		    a=a+(c%10);
		    b=b*(c%10);
		    c=c/10;
	    }while(c!=0);
	    if(a==b)   printf("%d\n",i);
        continue;
	}
    return 0;
}
