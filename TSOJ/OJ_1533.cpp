/*字符串中*号的处理*/
#include<stdio.h>
#include<string.h>
void fun(char x[])
{
	int i,j=0;
	for(i=0;i<strlen(x)&&x[i]=='*';i++)   x[j++]=x[i];
	while(x[i])
	{
		if(x[i]!='*')    x[j++]=x[i];
		i++;
	}
	x[j]='\0';
}
int main()
{
    char a[10000];
    gets(a);
    fun(a);
    puts(a);
}

