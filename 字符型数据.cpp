//c99�У��ַ��������������ݵ�һ��
#include <stdio.h>
int main(void)
{
	//1.�����ַ��ͱ���
	signed char sc;
	unsigned char uc;
	char ch;				//vc++�У�char���͵ı�����signed char ���͵ģ��������ı������� char���͵ı���������unsigned char ���͵�
	printf("%d,%d,%d\n",sizeof(sc),sizeof(uc),sizeof(ch));		//���1,1,1

	//2.�����¶˴�������н��
	uc = -1;
	ch = -1;
	printf("%d,%d\n",ch,uc);	//���-1,255
	/*
	�����ȼ���
	int w;
	pritnf("%d,%d,\n",w = ch,w = uc);
	*/
	return 0;
}
