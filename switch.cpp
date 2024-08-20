#include<stdio.h>
int main()
{
	int a;
	printf("enter 5 numbers");
	scanf("%d",&a);
	switch(a)
	{
		
		case 1:printf("you enter one");
		break;
		case 2:printf("you enter two");
		break;
		case 3:printf("you enter three");
		break;
		case 4:printf("you enter four");
		break;
		case 5:printf("you enter five");
		break;
		
		default:
			printf("invalied number");
			break;
			
		
	}
}
