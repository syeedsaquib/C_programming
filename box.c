#include<stdio.h>

int main()
{
	int i,j,k;
	
	for(i=0;i<=5;i++)
	{
		printf("* ");
	}
	printf("\n");
	for(i=0;i<=3;i++)
	{
		printf("* ");
		for(j=0;j<=7;j++)
		{
			printf(" ");
		}
		printf("* ");
		printf("\n");
	}
	for(k=0;k<=5;k++)
	{
		printf("* ");
	}
}
