#include <stdio.h>
int main()
{
	double a;	//double ˫���ȸ�����
	printf("������ɼ�:");
	scanf("%lf",&a);
	/*if(a<0 || a>100)		// ||�߼�������		method 1
		printf("����ɼ��ǲ����ܵ�\n");
	if(a>=0 && a<=60)		// && �߼�������
		printf("����ɼ�������\n");
	if(a>=60 && a<=100)
		printf("����ɼ�����\n"); */
	/*							//method 2
	if(a<0||a>100)
		printf("����ɼ��ǲ����ܵ�\n");
	else
	{
		if(a<60)
			printf("����ɼ�������\n");
		else
			printf("����\n");
	}*/
	if (a<0||a>100)			// method 3 equals to method 2
		printf("������Բ��\n");
	else if (a<60)
		printf("�������\n");
	else 
		printf("����\n");
	return 0;
}
