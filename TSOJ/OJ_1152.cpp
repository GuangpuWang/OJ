#include<stdio.h>
#include<string.h>
#include<math.h>
char area[32][5]={"UTC","GMT","BST","IST","WET","WEST","CET","CEST","EET","EEST","MSK",
					"MSD","AST","ADT","NST","NDT","EST","EDT","CST","CDT","MST","MDT",
					"PST","PDT","HST","AKST","AKDT","AEST","AEDT","ACST","ACDT","AWST"};
double times[32]={0,0,1,1,0,1,1,2,2,3,3,4,-4,-3,-3.5,-2.5,-5,-4,-6,
					-5,-7,-6,-8,-7,-10,-9,-8,10,11,9.5,10.5,8};
int cmp(char area0[])
{
	int i;
	for(i=0;i<32;i++)
	{
		if(strcmp(area[i],area0)==0)
			break;
	}
	return i;
}
//º¯ÊýÅÐ¶ÏÊ±Çø²îÒì
int differ(char area2[],char area1[])
{
	int m,n;
	m=cmp(area1);
	n=cmp(area2);
	return (int)((times[n]-times[m])*60);
}
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=1;i<=n;i++)
		{
			int hour=0,min=0;
			char time[10];
			scanf("%s",time);
			switch(time[1])
			{
				case 'o':hour=12;
						min=0;
						break;
				case 'i':hour=0;
						min=0;
						break;
				default:sscanf(time,"%d:%d",&hour,&min);
						hour%=12;
						scanf("%s",time);
						if(time[0]=='p')
							hour+=12;
			}
			char area1[10],area2[10];
			scanf("%s%s",area1,area2);
			int time0;
			time0=hour*60+min+differ(area2,area1);
			if(time0<0)
				time0+=1440;
			time0%=1440;
			switch(time0)
			{
				case 0:printf("midnight\n");break;
				case 720:printf("noon\n");break;
				default:hour=time0/60;
						min=time0%60;
						if(hour==0)
							printf("12:%d a.m.\n",min);
						else if(hour<12)
							printf("%d:%d a.m.\n",hour,min);
						else if(hour==12)
							printf("12:%d p.m.\n",min);
						else
							printf("%d:%d p.m.\n",hour%12,min);
			}
		}
	}
	return 0;
}
