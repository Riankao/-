//INC自增  EDC 自减
#include <stdio.h>
int main()
{
	int a , b;
	printf("请输入两个正整数:");
	scanf("%d%d",&a,&b);
	printf("%d + %d = %d\n",a,b,a+b);
	printf("%d - %d = %d\n",a,b,a-b);
	printf("%d * %d = %d\n",a,b,a*b);
	printf("%d / %d = %d\n",a,b,a/b);
	return 0;
}