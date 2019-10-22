#include <stdio.h>
int mian()
{
	//1.定义整型--带符号整型--signed + 整型关键字 + int + 变量名（其中signed和int可省略）
	short a=1;				//short int a=1;	signed short int a=1;	signed short a=1;等价
	int b=2;
	long c=3;
	//long long d=4;		//long long是c99新增内容，vc++6.0还没得这个功能

	//2.定义无符号整型 --unsigned + 整型关键字 + int + 变量名（其中int可省）
	unsigned short e=5;		//unsigned short int e;等价
	unsigned int f=6;
	unsigned long g=7;

	//3.求数据类型占的字节用sizeof
	printf("%d,%d,%d\n",sizeof(short),sizeof(int),sizeof 5);		//输出2,4,4

	//4,整型10进制
	printf("%hd,%d,%lf\n",a,b,c);				//等价于printf("%hi,%i,%li\n",a,b,c);
	printf("%hu,%u,%lu\n",e,f,g);				//%u 无符号

	//5.整型8进制，16进制
	printf("%o,%x,%X,%#x,%#X\n",123,123,123,123,123);	//173,7b,7B,0x7b,0x7b

	//6.scanf函数中不可以使用#
//	scanf("%#x",&b);
	printf("%d\n",b);

	//7.隐式数据转换--长，赋，短，截断
	unsigned short us = -1;		//长整形数据赋给短整型数据时候，只会将低几位赋给短整型数据
	printf("%hu,%hd\n",us,us);	//输出65535， -1

	//8.隐式数据类型转换 -- 无符短 赋 长，先把短的全部内容复制到长的低位，高位填0
	unsigned int ui = us;
	printf("%u\n",ui);		//输出65535

	//9.隐式数据类型转换 -- 带符短  赋 长，先把短的全部内容复制到长的低位，如果短是自然数，长的高位填0，否则高位填1
	short ss = -1;
	ui = ss;
	printf("%u\n",ui);

	ss = 1;
	ui = ss;
	printf("%u\n",ui);

	//10.隐式数据类型转换 -- 等长，保留原有补码
	ui = -1;
	printf("%u\n",ui);	//输出4294967295

	//11.整型常量-显示数据类型转换
	printf("%u,%ld,%lu",1U,1L,1UL);

	//12.整型数据的强制数据类型转换-（数据类型）该处的圆括号是强制数据蕾西转换符，是一个单目运算符
	printf("%hu,%d\n",(unsigned short )-1,(int)ui);
	return 0;
}