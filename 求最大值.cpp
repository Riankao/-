#include <stdio.h>					//stdio.h包含printf&scanf,函数定义再库里面
int main(void)
{
	double a,b;						//double小数
	printf("请输入两个数\n");
	scanf("%lf%lf",&a,&b);						//&对ab赋值；通过scaf进行赋值需要使用&取地址符
	printf("a is %lf, b is %lf\n", a, b);		//%lf浮点数据进行格式输入输出
	/*
	if(a>=b)								表达式是数值和运算符的组合
		printf("a是最大值，其值为：%lf\n",a);
	else
		printf("b是最大值，其值为：%lf\n",b);
	return 0;
	*/
	if(a<b)
		a=b;						//将b赋值给a
	printf("最大值位：%lf\n",a);
	return 0;
}
