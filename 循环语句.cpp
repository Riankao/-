#include <stdio.h>
int main(void)
{
	/*int i=1;
	while(i<=5)
	{
		printf("%d\n",i++);
	}
*/
	for(int i=1;i<=10;i++)
	{
		printf("%d\n",i);
		;
	}
	i=0;
	printf("%d\n",++i);
	printf("%d\n",i);

	i=0;
	printf("%d\n",i++);
	printf("%d\n",i);


	i=0;
	printf("%d,%d\n",++i,i);		//���1,0���ȼ���i	�ڼ���++i)
	return 0;
}
