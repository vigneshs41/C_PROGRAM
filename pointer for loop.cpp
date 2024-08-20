#include<stdio.h>
int main()
{
    int u;
	int *a;
	int **b;
	int ***c;
	int ****d;
	int *****e;
	int ******f;
	int *******g;
	int ********h;
	int *********i;
	int **********j;
	a=&u;
	b=&a;
    c=&b;
	d=&c;
	e=&d;
	f=&e;
	g=&f;
	h=&g;
	i=&h;
	j=&i;
	for(int u=0;u<10;u++)
	{
		if(u==0)
		{
			printf("value of u %d\n",u);
			printf("address of u %p\n",&a);
		}
		if(u==1)
		{
			printf("value of u %d\n",u);
			printf("address of u %p\n",&b);
		}
		if(u==2)
		{
			printf("value of u %d\n",u);
			printf("address of u %p\n",&c);
		}
		if(u==3)
		{
			printf("value of u %d\n",u);
			printf("address of u %p\n",&d);
		}
		if(u==4)
		{
			printf("value of u %d\n",u);
			printf("address of u %p\n",&e);
		}
		if(u==5)
		{
			printf("value of u %d\n",u);
			printf("address of u %p\n",&f);
		}
		if(u==6)
		{
			printf("value of u %d\n",u);
			printf("address of u %p\n",&g);
		}
			if(u==7)
		{
			printf("value of u %d\n",u);
			printf("address of u %p\n",&h);
		}
			if(u==8)
		{
			printf("value of u %d\n",u);
			printf("address of u %p\n",&i);
		}
		if(u==9)
		{
			printf("value of u %d\n",u);
			printf("address of u %p\n",&j);
		}
		
	}
     
}
