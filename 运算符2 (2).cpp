#include <stdio.h>
int main()
{
	int i=1,j=4;
	printf("%d,%d\n",--i,j--);
	printf("%d,%d\n",i,j);
	//printf("%d\n",--(i+j));		//自增自减运算符不能用于一个数值，只能作用于变量
	i = 1, j = 4;
	printf("%d\n",i+++j);		//不同编译器对这样的有不同的定义，对不可移植的操作应尽量避免
	int a ;
	printf("%d\n",sizeof((double)a));	//输出8,(double)强制转换为double类型，所以占了8个字节
	printf("%d\n",sizeof(a));			//输出4,a实际上占了4个字节
	return 0;
}