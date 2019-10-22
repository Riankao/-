#include <stdio.h>
int main(void)
{
	printf("%d\n",printf("haha\n"));	//pirntf函数返回值为整型，会吧输出的字符个数返回
	/*
	输出
	haha
	5
	*/
	int a,b;
	printf("%d\n",scanf("%d%d",&a,&b));		//scanf函数的返回值按其正确格式输入的变量的个数
	return 0;
}