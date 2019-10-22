/*
(1)条件运算符是唯一的三目运算符，其优先级为13
（2）条件运算符的方向必须是从左到右
*/
#include <stdio.h>
void man (int a,int b);		//输出两个整数的最大值
int main()
{
	1?printf("haha\n"):printf("hehe\n");		//条件表达式 + ? + if的控制语句 : else的控制语句
	/*			//与上句等价
	if(1)
		printf("haha\n");
	else
		printf("hehe\n");
	*/
	
	1?printf("1\n"),printf("2\n"):(printf("3\n),printf("4\n"));	
	/*		//与上句等价		
	if(1)
	{
	printf("1\n");
	printf("2\n");
	}
	else
	{
		printf("3\n");
		printf("4\n");
	}
	*/
	
	1?printf("1\n"),printf("2\n"):printf("3\n"),printf("4\n");
	/*
	if(1)
	{
		printf("1\n");
		printf("2\n");
	}
	else
		printf("3\n");
	printf("4\n");
	*/

	0?printf("A\n"):0?printf("B\n"):printf("C\n");
	/*
	if(0)
		printf("A\n");
	else if (0)
		printf("B\n");
	else 
		printf("C\n");
		*/
	max(3,2);
	// 对于（2）
	int a=0;
	0?(a+=2):2;
	printf("%d\n",a);
//	0?return 0:printf("123\n");
//	0?int x:printf("123\n");
	return 0;
}
void max(int a,int b)
{
	printf("%d\n",a>b?a:b);

	//a>b?printf("%d\n",a):printf("%d\n",b);
	/*
	if(a>b)
		printf("%d\n",a);
	else
		printf("%d\n",b);
		*/
} 
