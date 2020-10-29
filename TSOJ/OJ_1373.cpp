/*
题目描述：
给定一行表达式，中间没有空格，输出表达式的计算结果。测试数据保证在 int 范围之内。

这是简单的一个题目，只涉及加法和减法。

输入描述：
一行表达式

输出描述：
表达式的计算结果

样例输入：
12+21-0

样例输出：
33
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int a;
	char c;
	while(scanf("%d",&a)!=EOF)
	{
		int num[500];
		num[0]=a;
		int k=1;
		while(scanf("%c",&c)!=EOF)
		{
		   	if(c=='\n')
				break;
			else
			{
				int b;
		    	scanf("%d",&b);
				switch(c)
				{
					case '+':
						num[k++]=b;
						break;
					case '-':
						num[k++]=-b;
						break;
				}
			}
		}
		int sum=0;
		for(int i=0;i<k;i++)
		 	sum+=num[i];
		printf("%d\n",sum);
	}
	return 0;
}
