/*
题目内容
题目描述:
有n盏灯，编号为1~n。第1个人把所有灯打开，第2个人按下所有编号为2的倍数的开关（这些灯被关掉），第3个人按下所有编号为3的倍数的开关（其中关掉的灯将被打开，打开的将被关掉），依次类推。一共有k个人，问最后有哪些灯开着？

输入描述：
多组输入。每组占一行，输入n表示灯的数目和k表示人数 ，输出开着的灯编号。

输出描述：
多组输出。每组输出开着灯的编号，每个编号占一行，行数与开着的灯的个数相同。

样例输入:
7 3

样例输出:
1

5

6

7
*/
#include<stdio.h>
int main()
{
	int n,k;
	while(scanf("%d %d",&n,&k)!=EOF)
	{
		int i,j,a,b;
		for(j=1;j<=n;j++)
		{
		    a=j;
		    for(i=1;i<=k;i++)
				if(a%i==0)   a=-a;
		if(a<0)   printf("%d\n",j);
		}
	}
	return 0;
}
