#include <stdio.h>
int main()
{
	int h1,m1,a,b,t1,t2,t;
	scanf("%d%d",&a,&b);
	h1=a/100;
	m1=a%100;
	t1=h1*60+m1;
	t2=t1+b;
	t=(t2/60)*100+(t2%60);
	printf("%d\n",t);
	return 0;
}