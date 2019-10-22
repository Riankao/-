#include <stdio.h>
int main()
{
	int a,b,c=0;
	printf("请输入两个数:");
	scanf("%d%d:",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("%d,%d,",a,b);
	return 0;
}