//���ݳ���
#include<stdio.h>
int main()
{
	printf("������Ҫ�����¥��:");
	int a;
	scanf("%d",&a);
	switch(a)
	{
	case 1:					//��ִ����һ��case��ź�����󣬾ʹӴ˱�ſ�ʼִ����ȥ�����ڽ����ж�
		printf("��һ¥\n");
		break;			//break��switch��Ӧ��case�����к󣬽���switch��ִ��
	case 2:
		printf("�϶�¥\n");
		break;
	case 3:
		printf("����¥\n");
		break;
	default:			//default ���Է��ڿ�ͷ �м�
		printf("û�����¥��\n");
		break;
	}
	return 0;
}
/*
switch(���ʽ)			//�ó�����������������
{
case ����1:���1
case ����2:���2

case ����n:���n		//ÿ��case�������뻥����ͬ
default :��� n+1		//���Բ���default��ţ���Ÿı�˳��default�����ȳ���}
