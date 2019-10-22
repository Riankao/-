//布尔数据类型也是整型数据的一种
//#include <stbool.h>		//该文件中有_Bool这个数据类型，_Bool与bool是同义词，vc++中没有这个头文件
#include <stdio.h>
int main()
{
	//定义布尔型变量——c99中的新增类型，用它所定义的变量，可以用来表示真假，取值范围为1,0;
	bool a = false;	//false表示常数0,	 等价于bool a=0;
	bool b = truel	//true标书常数1，等价于 bool b=1;
// _Bool c;			//和bool c;等价

	 b = 3;			//3为真，b的值为1
	printf("%d\n",b); //输出：1
	printf("%d\n",sizeof(a));	//bool型占1个字节
	return 0 ;
}
