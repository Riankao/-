#include <stdio.h>
int main(void)
{	
	printf("%d,%d\n",3>2,3<2);
	if (1)			//if����������Ϊ��䣬Ҫ��{}
	{
		printf("haha\n");
		printf("lala\n");
	}
	if(0)
		printf("����\n");
	else				//else ͬ��
	{
		printf("����\n");
		printf("����\n");
	}
	return 0;
}
