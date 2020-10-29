/*
题目描述:
给定一个正整数，写出它的 8 进制表示。

输入描述：
多组输入，输入的第一行为一个正整数 n，表示接下来有 n 组数据，每一行为 1 个正整数 a (0 < a <= 10000)。

输出描述：
对于每一组数据，求出 a 的 8 进制表示法。

样例输入:
2

5

10

样例输出:
5

12
*/
#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int a,b=0,c=1;
		scanf("%d",&a);
		while(a!=0)
		{
			b=b+a%8*c;
			c=c*10;
			a=a/8;
		}
		printf("%d\n",b);
	}
	return 0;
}
