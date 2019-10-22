//c99中，字符型算作整型数据的一种
#include <stdio.h>
int main(void)
{
	//1.定义字符型变量
	signed char sc;
	unsigned char uc;
	char ch;				//vc++中，char类型的变量是signed char 类型的，在其他的编译器中 char类型的变量可能是unsigned char 类型的
	printf("%d,%d,%d\n",sizeof(sc),sizeof(uc),sizeof(ch));		//输出1,1,1

	//2.分析下端代码的运行结果
	uc = -1;
	ch = -1;
	printf("%d,%d\n",ch,uc);	//输出-1,255
	/*
	该语句等价于
	int w;
	pritnf("%d,%d,\n",w = ch,w = uc);
	*/
	return 0;
}
