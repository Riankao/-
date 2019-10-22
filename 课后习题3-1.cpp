#include <stdio.h>
#include <math.h>
int main()
{
	int a;
	double b,r;
	printf("请输入要计算的年数:\n");
	printf("请输入年增长率: (单位%)");
	scanf("%lf",&r);
	scanf("%d",&a);
	r /= 100;
	b = (1 + r);
	printf("%lf\n",pow (b,a));
	return 0;
}
