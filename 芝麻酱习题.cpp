#include <stdio.h>
int main(void)
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
		if(a>b)
		{
			int d;
			d=a;
			a=b;
			b=d;
		}
		if(c<a)
		{
			int d;
			d=a;
			a=c;
			c=d;
		}
		if(b>c)
		{
			int d;
			d=b;
			b=c;
			c=d;
		}
#if 1
		printf("%d,%d,%d\n",a,b,c);
#else
		printf("%d,%d,%d\n",c,b,a);
#endif
		return 0;
}