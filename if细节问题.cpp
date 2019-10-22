#include <stdio.h>
int main(void)
{	
	printf("%d,%d\n",3>2,3<2);
	if (1)			//if后面控制语句为多句，要加{}
	{
		printf("haha\n");
		printf("lala\n");
	}
	if(0)
		printf("哈哈\n");
	else				//else 同理
	{
		printf("啦啦\n");
		printf("卡卡\n");
	}
	return 0;
}
