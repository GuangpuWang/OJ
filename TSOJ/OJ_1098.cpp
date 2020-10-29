/*
题目描述:
输入一个整数，输出它的所有素数因子

输入描述：
输入一系列的整数（0，1，-1除外），每行一个

输出描述：
输出所有的素数因子，每个因子之间用1个空格分开，最后一个因子后面没有空格

样例输入:
8

30

125

样例输出:
2 2 2

2 3 5

5 5 5
*/
#include<stdio.h>
#include<string.h>
#include<math.h>
int prime(int n);
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int i=2,j=0,x,a[n];
		for(i=2;i<=n;i++)
		{
			x=prime(i);
			while(n%i==0&&x==1)
			{
				a[j++]=i;
				n/=i;
			}
		}
		for(i=0;i<j-1;i++)    printf("%d ",a[i]);
		printf("%d\n",a[j-1]);
	}
	return 0;
}
int prime(int n)
{
	int i;
	int x=1;
	for(i=2;i<=sqrt(n);i++)
		if(n%i==0)
		{
			x=0;
			break;
		}
	return x;
}
