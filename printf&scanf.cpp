#include <stdio.h>
int main()
{
	printf("%d\n",printf("hellow\n"));	//printf的返回值为整形，会返回输出字符个数
	int a,b;
	printf("%d\n",scanf("%d%d\n",&a,&b));	//scanf函数返回格式正确的变量个数
	return 0;
}