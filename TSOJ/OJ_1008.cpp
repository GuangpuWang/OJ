/*
题目描述:
给定一个正整数 n (2 <= n < 10000)，判断是否为质数。

输入描述：
多组输入，每行一个 n (2 <= n <= 10000)。

输出描述：
对于每一组数，如果是质数则输出 Yes，否则输出 No。

样例输入:
2

3

4

样例输出:
Yes

Yes

No
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,a;
	while(scanf("%d",&n)!=EOF)
	{
        a=1;
		for(i=2;i<=sqrt(n);i++)
			if(n%i==0)
		    {
			    a=0;
		        break;
		    }
		    else   a=1;
		if(a==1)   printf("Yes\n");
		else       printf("No\n");
	}
	return 0;
}
