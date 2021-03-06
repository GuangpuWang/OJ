/*
题目描述:
某校大门外长度为 L 的马路上有一排树，每两棵相邻的树之间的间隔都是 1 米。我们可以把马路看成一个数轴，马路的一端在数轴 0 的位置，另一端在 L 的位置；数轴上的每个整数点，即 0, 1, 2, ..., L，都种有一棵树。由于马路上有一些区域要用来建地铁。这些区域用它们在数轴上的起始点和终止点表示。已知任一区域的起始点和终止点的坐标都是整数，区域之间可能有重合的部分。现在要把这些区域中的树（包括区域端点处的两棵树）移走。你的任务是计算将这些树都移走后，马路上还有多少棵树。

输入描述：
输入两个整数 L (1 <= L <= 100000) 和 M (1 <= M <= 100)，L 代表马路的长度，M 代表区域的数目，L 和 M 之间用一个空格隔开。接下来的 M 行每行包含两个不同的整数，用一个空格隔开，表示一个区域的起始点和终止点的坐标。

输出描述：
占一行，马路上剩余的树的数目

样例输入:
500 3

150 300

100 200

470 471

样例输出:
298
*/
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int N,k,k1,k2;
	int i,j;
	while(scanf("%d %d",&N,&k)!=EOF)
	{
		int sum=0;
		int a[N+1];
		for(i=0;i<=N;i++)   a[i]=1;
		for(i=0;i<k;i++)
		{
			scanf("%d %d",&k1,&k2);
			for(j=k1-1;j<=k2-1;j++)   a[j]=0;
		}
		for(i=0;i<=N;i++)
			if(a[i])   sum+=1;
		printf("%d\n",sum);
	}
}
