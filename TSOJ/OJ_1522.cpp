/*³Ë·¨¾Å¾Å±í*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("---------------------------------------\n");
	for(a=1;a<10;a++)    printf("%4d",a);
	printf("\n---------------------------------------\n");
	for(a=1;a<10;a++)
	{
		printf("%d",a);
		for(b=1;b<10;b++)    printf("%4d",a*b);
		printf("\n");
    }
	printf("---------------------------------------\n");
	return 0;
}
