#include <stdio.h>
void main()
{
	int cocks=0, hens,chicks;
	while(cocks<=19)
	{
		hens=0;
		while(hens<=33)
		{
			chicks=100 - cocks - hens;
			if(5.0*cocks + 3.0*hens + chicks/3.0 == 100.0)
				printf("%d %d %d\n",cocks,hens,chicks);
			hens++;
		}
		cocks++;
	}
}
/*����ʹ�����Ը��������һ��ָ������
�������LΪ����ض��������д����ȷ��Ч�ĳ���
����������ԣ���д�������õ�����