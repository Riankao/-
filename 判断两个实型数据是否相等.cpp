#include <stdio.h>
#include <math.h>
int main()
{
	double a = 10.2222225,b = 10.2222229;
	//if (a == b)
	if(fabs(a-b)<=1e-6)		//double  fabs(double),int abs (int)
		printf("�����������\n");
	else
		printf("�������������\n");
	return 0;
}