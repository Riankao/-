#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,d;
	printf("����������ϵ��:");
	scanf("%lf%lf%lf",&a,&b,&c);
	if(fabs(a-0)<=1e-6)		//fabs��������֮��ľ���ֵ
	{
		printf("��������\n");
		return 0;
	}
	d=b*b - 4*a*c;
	if(b<0)
		printf("�˷�����ʵ����\n");
	else if(fabs(d)<=1e-6)
		printf("�˷��̵ĸ�Ϊ%lf\n",-b/(2*a));
	else
		printf("�˷��̵ĸ�Ϊ%lf,%lf\n",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));	//sqrt��ƽ����
	return 0;
}