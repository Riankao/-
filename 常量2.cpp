#include <stdio.h>
#define PI	3.14
#define ID	101
#define CH	'A'
#define S	"haha"
int main(void)
{
	printf("%lf,%d,%c,%s\n",PI,ID,CH,S);
	//常变量 c99新增
	//const int a=45;		//常变量必须在定义的时候初始化，初始化之后不可修改
	//const int b;		//error 常变量必须制定初始值
	//a=90;				// error 常变量不能修改
	return 0;
}