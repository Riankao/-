#include <stdio.h>
int max(int x,int y)			//main函数只能有一个，
								//函数体：先说明部分，再执行部分
{
	int z;					//说明部分
	if(x>y)z=x;				//执行部分
	else z=y;
	return(z);
}
void main()
{
	int a,b,c;				//说明部分
	scanf("%d%d",&a,&b);	//执行部分
	c=max(a,b);	
	printf("max=%d\n",c);
}
