/*
(1)�����������Ψһ����Ŀ������������ȼ�Ϊ13
��2������������ķ�������Ǵ�����
*/
#include <stdio.h>
void man (int a,int b);		//����������������ֵ
int main()
{
	1?printf("haha\n"):printf("hehe\n");		//�������ʽ + ? + if�Ŀ������ : else�Ŀ������
	/*			//���Ͼ�ȼ�
	if(1)
		printf("haha\n");
	else
		printf("hehe\n");
	*/
	
	1?printf("1\n"),printf("2\n"):(printf("3\n),printf("4\n"));	
	/*		//���Ͼ�ȼ�		
	if(1)
	{
	printf("1\n");
	printf("2\n");
	}
	else
	{
		printf("3\n");
		printf("4\n");
	}
	*/
	
	1?printf("1\n"),printf("2\n"):printf("3\n"),printf("4\n");
	/*
	if(1)
	{
		printf("1\n");
		printf("2\n");
	}
	else
		printf("3\n");
	printf("4\n");
	*/

	0?printf("A\n"):0?printf("B\n"):printf("C\n");
	/*
	if(0)
		printf("A\n");
	else if (0)
		printf("B\n");
	else 
		printf("C\n");
		*/
	max(3,2);
	// ���ڣ�2��
	int a=0;
	0?(a+=2):2;
	printf("%d\n",a);
//	0?return 0:printf("123\n");
//	0?int x:printf("123\n");
	return 0;
}
void max(int a,int b)
{
	printf("%d\n",a>b?a:b);

	//a>b?printf("%d\n",a):printf("%d\n",b);
	/*
	if(a>b)
		printf("%d\n",a);
	else
		printf("%d\n",b);
		*/
} 
