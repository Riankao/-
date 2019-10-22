#include <stdio.h>
int main()
{
	double a;	//double 双精度浮点型
	printf("请输入成绩:");
	scanf("%lf",&a);
	/*if(a<0 || a>100)		// ||逻辑或运算		method 1
		printf("这个成绩是不可能的\n");
	if(a>=0 && a<=60)		// && 逻辑与运算
		printf("这个成绩不及格\n");
	if(a>=60 && a<=100)
		printf("这个成绩及格\n"); */
	/*							//method 2
	if(a<0||a>100)
		printf("这个成绩是不可能的\n");
	else
	{
		if(a<60)
			printf("这个成绩不及格\n");
		else
			printf("及格！\n");
	}*/
	if (a<0||a>100)			// method 3 equals to method 2
		printf("你在宰圆子\n");
	else if (a<60)
		printf("不及格哈\n");
	else 
		printf("及格\n");
	return 0;
}
