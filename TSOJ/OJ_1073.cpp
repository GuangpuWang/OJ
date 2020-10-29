/*Êý×Ö·´×ª*/ 
#include<stdio.h>
#include<string.h>
#define N 100
int main()
{
	char a[N],b[N];
	int i,j,s;
	while(gets(a)!=NULL)
{
	s=strlen(a);
	if(a[0]=='-')  
	{
        b[0]='-';
	    for(i=1;i<s;i++)   b[i]=a[s-i];
	    b[s]='\0';
	    for(i=1;i<s;i++)
	        if(b[i]!='0')  break;
        printf("-");
        for(j=i;j<s;j++)   printf("%c",b[j]);
	}
	else
	{
	    for(i=0;i<s;i++)   b[i]=a[s-1-i];
	    b[s]='\0';
	    for(i=0;i<s;i++)
	        if(b[i]!='0')   break;
	    for(j=i;j<s;j++)    printf("%c",b[j]);
    }
    printf("\n");
}
	return 0;
}















