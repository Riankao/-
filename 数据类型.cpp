#include <stdio.h>
int main()
{
	int hour1,minute1,hour2,minute2;
	printf("请输入时间1:");
	scanf("%d%d",&hour1,&minute1);
	printf("请输入时间2:");
	scanf("%d%d",&hour2,&minute2);
	int t1=hour1*60+minute1;
	int t2=hour2*60+minute2;
	int t = t2-t1;
	printf("时间差%d小时%d分",t/60,t%60);
	return 0;
}
