//scanf�����в���ʹ��#,-,m.n�ĸ�ʽ�����ַ�(m,n)������Ȼ��������ʹ��Ԥ��ĸ�ʽ�����ַ�
#include <stdio.h>
int main()
{
	int a;
	
	scanf("%5d",&a);		//����ʹ��Ԥ���ӷ�
	printf("%d\n",a);
	
	/*scanf("%-5d",&a);		//scanf��������ʹ��"-"�����ַ�
	printf("%d\n",a);
	*/
	/*double b;
	scanf("%7.2lf",&b);		//scanf��������ʹ��С���ĸ����ַ�
	printf("%lf\n",b);
	*/
	char ch;
	while((ch = getchar()) !='\n')
		putchar(ch);
	putchar('\n');
	return 0;
}
