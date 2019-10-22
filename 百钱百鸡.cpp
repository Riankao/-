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
/*程序：使用语言给计算机的一组指令序列
程序设计L为求解特定问题而编写的正确有效的程序
程序设计语言：编写程序所用的语言