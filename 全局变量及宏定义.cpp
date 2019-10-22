/*
(1)宏名，全局变量名建议大写
(2)#号开头的都是预处理指令，预处理是发生在预编译阶段（编译前），对源程序文件进行一些简答的文本替换——VC++钟编译按钮集成了预编译
(3)全局变量的作用域就是从定义处开始，到整个文件的末尾
*/
#include <stdio.h>
//宏定义
#define PI 3.141592		//定义了一个宏名PI，程序在预编译阶段会把从该定义处之后所有出现PI的地方（除字符串）替换成定义的值
//全局变量
int A;
int B = 3;
int main(void)
{
	printf("%lf\n",PI);		//输出定义的值
	printf("PI\n");			//输出PI	字符串内不会发生宏替换
// PI = 10;					//error PI是个符号常量，不能被赋值

	printf("%d,%d\n",A,B);
	return 0;
}