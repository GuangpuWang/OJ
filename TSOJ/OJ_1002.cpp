/*
题目描述:
给定两个整数 a, b (a, b 均不超过 int 类型的表示范围)，求出 a + b 的和。

输入描述：
多组输入，每组输入为一行，里面有 2 个数 a, b。

输出描述：
对于每一组输入，输出一个值为该组 a + b 的和。

样例输入:
1 2

2 3

样例输出:
3

5
*/
#include<stdio.h>
int main()
{
	int a,b,c;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
	c=a+b;
	printf("%d\n",c);
    }
	return 0;
}
