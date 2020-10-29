/*»ØÎÄ×Ö·û´®ÅÐ¶Ï*/
#include<stdio.h>
#include<string.h>
int main()
{
	char a[10001];
	while(gets(a)!=NULL)
	{
	    int i,j,n,t=1;
	    n=strlen(a);
	    for(i=0;i<n/2;i++)
	        if(a[i]!=a[n-i-1]) 
	        {
	            t=0;
	            break;
	        }
	        if(t==1)  printf("YES\n");
	        else      printf("NO\n");
	}
	return 0;
}
