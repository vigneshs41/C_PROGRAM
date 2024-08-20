#include <reg52.h>
sbit rs =P2^0;
sbit rw =P2^1;
sbit e  =P2^2;
sbit r1 = P1^0;
sbit r2 = P1^1;
sbit r3 = P1^2;
sbit r4 = P1^3;
sbit c1 = P2^0;
sbit c2 = P2^1;
sbit c3 = P2^2;
sbit c4 = P2^3;
void lcd_send_data(char dat);
void lcd_send_cmd(char cmd);
void lcd_print();
//void show(unsigned char *s);
void delay();
void main()
{
	lcd_send_cmd(0x01);
	lcd_send_cmd(0x0c);
	lcd_print();
	while(1)
	{
		r1=0,r1=1,r2=1,r3=1;
		if(c1==0)
		{
			while(1)
			{
				lcd_send_data('1');
				lcd_send_cmd(0x06);
			}
		}
		else if(c2==0)
		{
			while(1)
			{
				lcd_send_data('2');
				lcd_send_cmd(0x06);
			}
		}
		else if(c3==0)
		{
			while(1)
			{
				lcd_send_data('3');
				lcd_send_cmd(0x06);
			}
		}
		else if(c4==0)
		{
			while(1)
			{
				lcd_send_data('4');
				lcd_send_cmd(0x06);
			}
		}
		r1=1,r1=0,r2=1,r3=1;
		if(c1==0)
		{
			while(1)
			{
				lcd_send_data('5');
				lcd_send_cmd(0x06);
			}
		}
		else if(c2==0)
		{
			while(1)
			{
				lcd_send_data('6');
				lcd_send_cmd(0x06);
			}
		}
		else if(c3==0)
		{
			while(1)
			{
				lcd_send_data('7');
				lcd_send_cmd(0x06);
			}
		}
		else if(c4==0)
		{
			while(1)
			{
				lcd_send_data('8');
				lcd_send_cmd(0x06);
			}
		}
		r1=1,r1=1,r2=0,r3=1;
		if(c1==0)
		{
			while(1)
			{
				lcd_send_data('9');
				lcd_send_cmd(0x06);
			}
		}
		else if(c2==0)
		{
			while(1)
			{
				lcd_send_data('10');
				lcd_send_cmd(0x06);
			}
		}
		else if(c3==0)
		{
			while(1)
			{
				lcd_send_data('11');
				lcd_send_cmd(0x06);
			}
		}
		else if(c4==0)
		{
			while(1)
			{
				lcd_send_data('12');
				lcd_send_cmd(0x06);
			}
		}
		r1=1,r1=1,r2=1,r3=0;
		if(c1==0)
		{
			while(1)
			{
				lcd_send_data('13');
				lcd_send_cmd(0x06);
			}
		}
		else if(c2==0)
		{
			while(1)
			{
				lcd_send_data('14');
				lcd_send_cmd(0x06);
			}
		}
		else if(c3==0)
		{
			while(1)
			{
				lcd_send_data('15');
				lcd_send_cmd(0x06);
			}
		}
		else if(c4==0)
		{
			while(1)
			{
				lcd_send_data('16');
				lcd_send_cmd(0x06);
			}
		}
    }
}
void lcd_send_cmd(char cmd)
{
	P3=cmd;
	rs=0;
	rw=0;
	e=1;
	delay();
	e=0;
}
void lcd_send_data(char dat)
{
	P3=dat;
	rs=1;
	rw=0;
	e=1;
	delay();
	e=0;
}
void delay()
{ int unsigned i,j;
	for(i=0;i<=100;i++)
	{
		for(j=0;j<=100;j++)
		{}
		}
}
