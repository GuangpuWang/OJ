/*×Ö·û´®·´×ª*/
#include<stdio.h>
#include<string.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		char a[1000];
		gets(a);
		int j;
		for(j=strlen(a)-1;j>=0;j--)
		    printf("%c",a[j]);
		printf("\n");
	}
	return 0;
}
