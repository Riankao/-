#include <stdio.h>
#include <math.h>
int main()
{
	int a;
	double b,r;
	printf("������Ҫ���������:\n");
	printf("��������������: (��λ%)");
	scanf("%lf",&r);
	scanf("%d",&a);
	r /= 100;
	b = (1 + r);
	printf("%lf\n",pow (b,a));
	return 0;
}
