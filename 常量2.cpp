#include <stdio.h>
#define PI	3.14
#define ID	101
#define CH	'A'
#define S	"haha"
int main(void)
{
	printf("%lf,%d,%c,%s\n",PI,ID,CH,S);
	//������ c99����
	//const int a=45;		//�����������ڶ����ʱ���ʼ������ʼ��֮�󲻿��޸�
	//const int b;		//error �����������ƶ���ʼֵ
	//a=90;				// error �����������޸�
	return 0;
}