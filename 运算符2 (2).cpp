#include <stdio.h>
int main()
{
	int i=1,j=4;
	printf("%d,%d\n",--i,j--);
	printf("%d,%d\n",i,j);
	//printf("%d\n",--(i+j));		//�����Լ��������������һ����ֵ��ֻ�������ڱ���
	i = 1, j = 4;
	printf("%d\n",i+++j);		//��ͬ���������������в�ͬ�Ķ��壬�Բ�����ֲ�Ĳ���Ӧ��������
	int a ;
	printf("%d\n",sizeof((double)a));	//���8,(double)ǿ��ת��Ϊdouble���ͣ�����ռ��8���ֽ�
	printf("%d\n",sizeof(a));			//���4,aʵ����ռ��4���ֽ�
	return 0;
}