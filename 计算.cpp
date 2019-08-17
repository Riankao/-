#include <stdio.H>
int main()
{
	double a, b, c;
	printf("请输入两个数：\n");
	scanf("%lf%lf",&a,&b);
	printf("%lf/%lf=%lf\n",a,b,c=a/b);
	return 0;
}