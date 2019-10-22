#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int h1=a/100;
	int m1=a%100;
	//printf("%d\n%d\n",h1,m1);
	int h2=b/60;
	int m2=b%60;
	//printf("%d\n%d\n",h2,m2);
	int h=h1 + h2;
	int m=m1+m2;
	int t=(m/60)+h;
	int m3=m%60;
	printf("%d%d\n",t,m3);
	return 0;
}