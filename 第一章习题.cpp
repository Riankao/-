/*#include <stdio.h>
#include <math.h>//法2
int main()
{
	int i;
	printf("请输入一个整数:");
	scanf("%d",&i);
	
	if(i<=1)
		printf("no\n");
	else if(i==2)
		printf("yes\n");
	else
	{
		double b = sqrt(i);	//2
		for(int a=2;a<=b;a++)		
		{
			if(i%a == 0)
			{
				printf("No\n");
				return 0;
			}
		}
		printf("yes\n");
	}
	return 0;
}*/

/*
#include <stdio.h>
int main()
{
	int i;
	printf("请输入一个整数:");
	scanf("%d",&i);
	if(i%4==0 &&i%100!=0||i%400==0)
		printf("yes\n");
	else
		printf("no\n");
	return 0;
}*/


#include <stdio.h>
int main()
{
	int a,s=0;
	printf("请输入一个整数\n");
	scanf("%d",&a);
	for(int i=1;i<=a;i*=10)

	{
		s = a%(10*i)/i + 10*s;
	}
	if(a==s)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}

	
	return 0;
}
