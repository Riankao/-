#include <stdio.h>
int main()
{
	int foot=0,inch=0;
	int cm=0;
	scanf("%d",&cm);
	foot=cm/30.48;
	inch=((cm/30.48)-foot)*12;
	printf("%d %d\n",foot,inch);
		return 0;
}