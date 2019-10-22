#include <stdio.h>
int main ()
{
	printf("%d,%d\n",3>2,6<2);
	if(99)				//表达式的值为0，假；非0，真的
	{
		printf("a\n");		//再if语句，控制语句非单，加上大括号
		printf("b\n");
	}
	if (0)
		printf("1\n");
	else
	{
		printf("0\n");
		printf("5\n");
	}
	return 0;
}
