/*西天取经*/
#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int n;
    while(scanf("%d",&n)!=EOF)
    {
        int i,all=0;
        for(i=1;i<=n;i++)
        {
    	    int k,j,m,max=0;
		    scanf("%d",&k);
		    for(j=1;j<=k;j++)
		    {
		        scanf("%d",&m);  
			    if(m>max)    max=m;
		    }
		    all=all+max;
	    }
	    printf("%d\n",all);
	}
	return 0;
}
