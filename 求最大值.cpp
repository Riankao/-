#include <stdio.h>					//stdio.h����printf&scanf,���������ٿ�����
int main(void)
{
	double a,b;						//doubleС��
	printf("������������\n");
	scanf("%lf%lf",&a,&b);						//&��ab��ֵ��ͨ��scaf���и�ֵ��Ҫʹ��&ȡ��ַ��
	printf("a is %lf, b is %lf\n", a, b);		//%lf�������ݽ��и�ʽ�������
	/*
	if(a>=b)								���ʽ����ֵ������������
		printf("a�����ֵ����ֵΪ��%lf\n",a);
	else
		printf("b�����ֵ����ֵΪ��%lf\n",b);
	return 0;
	*/
	if(a<b)
		a=b;						//��b��ֵ��a
	printf("���ֵλ��%lf\n",a);
	return 0;
}
