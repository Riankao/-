#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,d;
	printf("请输入三个系数:");
	scanf("%lf%lf%lf",&a,&b,&c);
	if(fabs(a-0)<=1e-6)		//fabs求两个数之差的绝对值
	{
		printf("输入有误\n");
		return 0;
	}
	d=b*b - 4*a*c;
	if(b<0)
		printf("此方程无实数根\n");
	else if(fabs(d)<=1e-6)
		printf("此方程的根为%lf\n",-b/(2*a));
	else
		printf("此方程的根为%lf,%lf\n",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));	//sqrt求平方根
	return 0;
}