#include <stdio.h>
int mian()
{
	//1.��������--����������--signed + ���͹ؼ��� + int + ������������signed��int��ʡ�ԣ�
	short a=1;				//short int a=1;	signed short int a=1;	signed short a=1;�ȼ�
	int b=2;
	long c=3;
	//long long d=4;		//long long��c99�������ݣ�vc++6.0��û���������

	//2.�����޷������� --unsigned + ���͹ؼ��� + int + ������������int��ʡ��
	unsigned short e=5;		//unsigned short int e;�ȼ�
	unsigned int f=6;
	unsigned long g=7;

	//3.����������ռ���ֽ���sizeof
	printf("%d,%d,%d\n",sizeof(short),sizeof(int),sizeof 5);		//���2,4,4

	//4,����10����
	printf("%hd,%d,%lf\n",a,b,c);				//�ȼ���printf("%hi,%i,%li\n",a,b,c);
	printf("%hu,%u,%lu\n",e,f,g);				//%u �޷���

	//5.����8���ƣ�16����
	printf("%o,%x,%X,%#x,%#X\n",123,123,123,123,123);	//173,7b,7B,0x7b,0x7b

	//6.scanf�����в�����ʹ��#
//	scanf("%#x",&b);
	printf("%d\n",b);

	//7.��ʽ����ת��--���������̣��ض�
	unsigned short us = -1;		//���������ݸ�������������ʱ��ֻ�Ὣ�ͼ�λ��������������
	printf("%hu,%hd\n",us,us);	//���65535�� -1

	//8.��ʽ��������ת�� -- �޷��� �� �����ȰѶ̵�ȫ�����ݸ��Ƶ����ĵ�λ����λ��0
	unsigned int ui = us;
	printf("%u\n",ui);		//���65535

	//9.��ʽ��������ת�� -- ������  �� �����ȰѶ̵�ȫ�����ݸ��Ƶ����ĵ�λ�����������Ȼ�������ĸ�λ��0�������λ��1
	short ss = -1;
	ui = ss;
	printf("%u\n",ui);

	ss = 1;
	ui = ss;
	printf("%u\n",ui);

	//10.��ʽ��������ת�� -- �ȳ�������ԭ�в���
	ui = -1;
	printf("%u\n",ui);	//���4294967295

	//11.���ͳ���-��ʾ��������ת��
	printf("%u,%ld,%lu",1U,1L,1UL);

	//12.�������ݵ�ǿ����������ת��-���������ͣ��ô���Բ������ǿ����������ת��������һ����Ŀ�����
	printf("%hu,%d\n",(unsigned short )-1,(int)ui);
	return 0;
}