#include <stdio.h>
int main(void)
{
	for(int i = 1;i <= 5; ++i)		//++��Ŀ�����
	{	printf("%d\n",i);
	;
	}
	i =0;
	printf("%d\n",i++);			//�����������i++��ֵ������֮ǰ��ֵ��=0
	printf("%d\n",i);			//i��������֮��=1

	i = 0;
	printf("%d\n",++i);			//ǰ���������++i��ֵ������֮���ֵ =1
	printf("%d\n",i);

	i=0;
	printf("%d, %d\n",++i,i);	//��printf������棬����˳���Ǵ��ҵ����ȼ���i��ֵ���ټ���++i��ֵ�� 

	return 0;
}


