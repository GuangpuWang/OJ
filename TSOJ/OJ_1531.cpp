/*×Ö·û´®ÅÅÐò*/
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100][100],b[100];
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<=n;i++)   gets(a[i]);
	for(i=1;i<=n;i++)
	    for(j=1;j<=n-i;j++)
	        if(strcmp(a[j],a[j+1])>0)
            {
	            strcpy (b,a[j]);
                strcpy (a[j],a[j+1]);
                strcpy (a[j+1],b);
            }
	for(i=1;i<=n;i++)    puts(a[i]);
	return 0; 	
}
