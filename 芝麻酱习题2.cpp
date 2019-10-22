#include <stdio.h>
int main()
{
	char num;
	scanf("%d",&num);
	switch(num)
	{
	
	/*
	case 1:printf("'abc'\n");
		break;
	case 2:printf("'bc'\n");
		break;
	case 3:printf("'c'\n");
		break;
	default:printf("输入有误请重新输入\n");
	*/
		
	case 1:
		putchar('a');
	case 2:
		putchar('b');
	case 3:
		putchar('c');
		putchar('\n');
		
	}
	return 0;
}