#include <stdio.h>
int main()
{
	int i=2,t=1;
	while(i<=5)
	{
		t=t*i;
		i++;
	}
	printf("%d\n",t);
	return 0;
}