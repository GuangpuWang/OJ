/*简单成绩统计*/ 
#include<stdio.h>
int main()
{
	int a=-1,b=0,max=0,min=100,all=0;
	double ave;
    while(b!=-1)
    {
     	a=a+1;
    	all=all+b;
    	if(b>max)   max=b;
    	scanf("%d",&b);
    	if(b!=-1&&b<min)   min=b;
	}
	ave=(double)all/a;
	printf("%d,%.2lf,%d,%d",a,ave,max,min);
	return 0;
}
