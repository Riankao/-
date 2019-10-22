#include <stdio.h>			//该头文件里有getchar和putchar函数的函数声明
void f1(void)				//从键盘读入一个字符并输出
{
	char ch = getchar();	//返回值类型为int，返回值为用户输入的ascⅡ码，出错返回-1
	putchar(ch);			//putchar向屏幕输出一个字符
}
void f2(void)				//从键盘读入三个字符并输出
{
	putchar(getchar());
	putchar(getchar());
	putchar(getchar());
}
int main(void)
{
	f1();
	//f2();
	/*
	运行结果1：输入boy按回车，输出boy
	运行结果2：输入b按回车，输出b和换行符，再输出o按回车，输出o
	*/
	return 0;
}