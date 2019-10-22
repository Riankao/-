//scanf函数中不能使用#,-,m.n的格式附加字符(m,n)属于自然数，可以使用预宽的格式附加字符
#include <stdio.h>
int main()
{
	int a;
	
	scanf("%5d",&a);		//可以使用预宽附加符
	printf("%d\n",a);
	
	/*scanf("%-5d",&a);		//scanf函数不能使用"-"附加字符
	printf("%d\n",a);
	*/
	/*double b;
	scanf("%7.2lf",&b);		//scanf函数不能使用小数的附加字符
	printf("%lf\n",b);
	*/
	char ch;
	while((ch = getchar()) !='\n')
		putchar(ch);
	putchar('\n');
	return 0;
}
