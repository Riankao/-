#include <stdio.h>
int max(int x,int y)			//main����ֻ����һ����
								//�����壺��˵�����֣���ִ�в���
{
	int z;					//˵������
	if(x>y)z=x;				//ִ�в���
	else z=y;
	return(z);
}
void main()
{
	int a,b,c;				//˵������
	scanf("%d%d",&a,&b);	//ִ�в���
	c=max(a,b);	
	printf("max=%d\n",c);
}
