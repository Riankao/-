#include <stdio.h>
int main(void)
{
	//算数运算符
	printf("%d,%lf\n",5/2,5.0/2);
	int a;
	printf("%d\n",a = 3.98);
	printf("%d,%d\n",5%2,4%2);
	//printf("%d\n",3.0%2);
	printf("%d,%d,%d\n",-13%3,13%-3,-13%23);
	//赋值运算符
	int b=1,c=7;
	printf("%d\n",b+=2);
	printf("%d\n",c/=2);
	//b+c=100;
	a = 1,b=2,b=3;
	printf("%d\n",(a=b)=c);
	return 0;
}
