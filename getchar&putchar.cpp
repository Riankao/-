#include <stdio.h>			//��ͷ�ļ�����getchar��putchar�����ĺ�������
void f1(void)				//�Ӽ��̶���һ���ַ������
{
	char ch = getchar();	//����ֵ����Ϊint������ֵΪ�û������asc���룬������-1
	putchar(ch);			//putchar����Ļ���һ���ַ�
}
void f2(void)				//�Ӽ��̶��������ַ������
{
	putchar(getchar());
	putchar(getchar());
	putchar(getchar());
}
int main(void)
{
	f1();
	//f2();
	/*
	���н��1������boy���س������boy
	���н��2������b���س������b�ͻ��з��������o���س������o
	*/
	return 0;
}