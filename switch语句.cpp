//电梯程序
#include<stdio.h>
int main()
{
	printf("请输入要到达的楼层:");
	int a;
	scanf("%d",&a);
	switch(a)
	{
	case 1:					//在执行完一个case标号后的语句后，就从此标号开始执行下去，不在进行判断
		printf("上一楼\n");
		break;			//break，switch对应的case的运行后，结束switch的执行
	case 2:
		printf("上二楼\n");
		break;
	case 3:
		printf("上三楼\n");
		break;
	default:			//default 可以放在开头 中间
		printf("没有这个楼层\n");
		break;
	}
	return 0;
}
/*
switch(表达式)			//该常量必须是整型类型
{
case 常量1:语句1
case 常量2:语句2

case 常量n:语句n		//每个case常量必须互不相同
default :语句 n+1		//可以不用default标号，标号改变顺序，default可以先出现}
