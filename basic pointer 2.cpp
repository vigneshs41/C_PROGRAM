#include<stdio.h>
int main()
{
	int x=5;
	int *j;
	j=&x;
	printf("the value of x %d\n",x);
    printf("the address of x %p\n",&x);
	printf("memory address stored in pointer %p\n",j);
	printf("the value of pointer by pointer j %d\n",*j);
		printf("the address of j %p\n",&j);
}
