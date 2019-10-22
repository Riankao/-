#include <stdio.h>
int main(void)
{
	int x;
	scanf("%d",&x);
	long double amount = x*(1+0.033)*(1+0.033)*(1+0.033);
	printf("%lf\n",amount);
	return 0;
}