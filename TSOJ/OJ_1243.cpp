/*∞¬‘À»Î≥°*/
#include<stdio.h>
#include<string.h>
struct guojia
{
    int a;
	char name[20];
	int num;
	char zhou[20];
};
void fun(struct guojia guo[],int n)
{
	int i,j;
	struct guojia x;
	for(i=0;i<n-1;i++)
        for(j=0;j<n-1-i;j++)
    	    if(strcmp(guo[j].name,guo[j+1].name)>0)
    	    {
    		    x=guo[j];
    		    guo[j]=guo[j+1];
    		    guo[j+1]=x;
        	}
}
int main()
{
	int n,i,j;
	while(scanf("%d",&n)!=EOF)
    {
	    struct guojia guo[n];
	    for(i=0;i<n;i++)   scanf("%d %s %d %s",&guo[i].a,guo[i].name,&guo[i].num,guo[i].zhou);
	    fun(guo,n);
	    for(i=0;i<n;i++)
	        if(strcmp(guo[i].name,"China")==0)   break;
	    for(j=0;j<n;j++)
	        if(j!=i)   printf("%d %s %d %s\n",guo[j].a,guo[j].name,guo[j].num,guo[j].zhou);
	    for(j=0;j<n;j++)
	        if(j==i)   printf("%d %s %d %s\n",guo[i].a,guo[i].name,guo[i].num,guo[i].zhou);
    }
	return 0;
}






