/*
题目描述:
一种细菌的繁殖速度是每天成倍增长。例如：第一天有10个，第二天就变成20个，第三天变成40个，第四天变成80个，……。现在给出第一天的日期和细菌数目，要你写程序求出到某一天的时候，细菌的数目。

输入描述：
第一行有一个整数n，表示测试数据的数目。其后n行每行有5个整数，整数之间用一个空格隔开。第一个数表示第一天的月份，第二个数表示第一天的日期，第三个数表示第一天细菌的数目，第四个数表示要求的那一天的月份，第五个数表示要求的那一天的日期。已知第一天和要求的一天在同一年并且该年不是闰年，要求的一天一定在第一天之后。数据保证要求的一天的细菌数目在长整数（long）范围内。

输出描述：
对于每一组测试数据，输出一行，该行包含一个整数，为要求的一天的细菌数。

样例输入:
2

1 1 1 1 2

2 28 10 3 2

样例输出:
2

40
*/
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	long int a[5];
	for(i=1;i<=n;i++)
	{
		int j;
		for(j=0;j<5;j++)    scanf("%d",&a[j]);
		int x,y,c,d;
			switch(a[3])
			{
				case 1:c=a[4];break;
				case 2:c=a[4]+31;break;
				case 3:c=a[4]+59;break;
				case 4:c=a[4]+90;break;
				case 5:c=a[4]+120;break;
				case 6:c=a[4]+151;break;
				case 7:c=a[4]+181;break;
				case 8:c=a[4]+212;break;
				case 9:c=a[4]+243;break;
				case 10:c=a[4]+273;break;
				case 11:c=a[4]+304;break;
				case 12:c=a[4]+334;break;
			}
			switch(a[0])
			{
				case 1:d=a[1];break;
				case 2:d=a[1]+31;break;
				case 3:d=a[1]+59;break;
				case 4:d=a[1]+90;break;
				case 5:d=a[1]+120;break;
				case 6:d=a[1]+151;break;
				case 7:d=a[1]+181;break;
				case 8:d=a[1]+212;break;
				case 9:d=a[1]+243;break;
				case 10:d=a[1]+273;break;
				case 11:d=a[1]+304;break;
				case 12:d=a[1]+334;break;
			}
			y=c-d;
		x=a[2]*pow(2,y);
		printf("%ld\n",x);
	}
	return 0;
}
