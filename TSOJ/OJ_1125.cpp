#include<stdio.h>
#include<string.h>
#include<math.h>
int han(int n)
{
	int a;
	if(n==1)  a=1;
	else if(n==2)  a=2;
	else  a=han(n-1)+han(n-2);
	return a;
};
int main()
{
	int n,a;
	while(scanf("%d",&n)!=EOF)
	{
		a=han(n);
		printf("%d\n",a);
	}
	return 0;
}
