#include <stdio.h>
int main()
{
	int a,g,s,b,t;
	scanf("%d",&a);
	b=a/100;
	g=a%10;
	s=(a-b*100)/10;
	printf("%d\n%d\n%d\n",b,s,g);
	
	/*if(g==0&&s==0)			//½â·¨2
		printf("%d\n",b);
	else if(g==0)
		printf("%d%d\n",s,b);
	else 
		printf("%d%d%d\n",g,s,b);*/

	printf("%d\n",t=g*100+s*10+b);
	return 0;
}