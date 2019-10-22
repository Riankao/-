#include <stdio.h>
int main(void)
{
	for(int i = 1;i <= 5; ++i)		//++单目运算符
	{	printf("%d\n",i);
	;
	}
	i =0;
	printf("%d\n",i++);			//后自增运算符i++的值是运算之前的值，=0
	printf("%d\n",i);			//i经过运算之后=1

	i = 0;
	printf("%d\n",++i);			//前自增运算符++i的值是运算之后的值 =1
	printf("%d\n",i);

	i=0;
	printf("%d, %d\n",++i,i);	//在printf语句里面，计算顺序是从右到左（先计算i的值，再计算++i的值） 

	return 0;
}


