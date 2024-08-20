#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a and b and c value\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		printf("a is greater the b");
		if(a>c)
		{
			printf("a is greatar the c");
			if(a<b)
			{
				printf("a is less the b");
			}
			else
			{
				printf("vanduchu...");
			}
		}
		
	}
	
}
