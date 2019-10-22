#include <stdio.h>
int main()
{
	double a;
	printf("ÇëÊäÈëÄãµÄ³É¼¨");
	scanf("%lf",&a);
	/*
	if(a<0||a>100)
		printf("imposible\n");
	if(a>=0&&a<60)
		printf("fail\n");
	if(a>=60&&a<=100)
		printf("pass\n");
	*/
	/*
	if (a<0||a>100)
		printf("imposible\n");
	else
	{
		if(a<60)
			printf("fail\n");
		else
			printf("pass\n");
	}
	*/
	if(a<0||a>100)
		printf("this is imposible!\n");
	else if (a<60)
		printf("fail\n");
	else 
		printf("pass\n");
	return 0;
}
