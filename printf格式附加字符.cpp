//格式声明 = %格式附加字符 格式字符		%lf
#include <stdio.h>
int main()
{
	printf("%5d\n",-12);	//%5d 预宽，5个字符宽度
	printf("%5c\n",'a');
	printf("%5s\n","abcd");

	printf("%-5dA\n",-12);	//%-5d  其中“负号”格式附加字符的功能：将数据向左对齐
	printf("%7.2lf\n",12.345);	//输出"  12.35" 一共占7个字符宽度，精确到小数点后两位（四舍五入）
	printf("%7.0lf\n",12.345);	//输出"     12"
	printf("%.5lf\n",12.345);	//输出"12.34500"
	printf("%-11lf\n",12.345);	//输出"12.345000" 小数点后默认6位
	return 0;
}