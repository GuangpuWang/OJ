/*¾ØÕó×ªÖÃ*/
#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int a[n][n],b[n][n];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		    b[i][j]=a[j][i];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
	        printf("%d ",b[i][j]);
	    if(j=n-1)
	        printf("%d",b[i][j]);
	    printf("\n");
	}
	return 0;
}
