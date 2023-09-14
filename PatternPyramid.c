#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,j;
	int space=4;
	for(i=0;i<5;i++)
	{
		for(j=0;j<space;j++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
		space--;
		space=0;	//reapeat it again
		for(i=4;i>0;i--)//reverse
		{
			for(j=0;j<space;j++)
			{
				printf(" ");
			}
			for(j=0;j<i;j++)
			{
				printf(" * ");
			}
			printf("\n");
			space++;
		}
	}
	return 0;
}
