//������������Ҳ���������ݵ�һ��
//#include <stbool.h>		//���ļ�����_Bool����������ͣ�_Bool��bool��ͬ��ʣ�vc++��û�����ͷ�ļ�
#include <stdio.h>
int main()
{
	//���岼���ͱ�������c99�е��������ͣ�����������ı���������������ʾ��٣�ȡֵ��ΧΪ1,0;
	bool a = false;	//false��ʾ����0,	 �ȼ���bool a=0;
	bool b = truel	//true���鳣��1���ȼ��� bool b=1;
// _Bool c;			//��bool c;�ȼ�

	 b = 3;			//3Ϊ�棬b��ֵΪ1
	printf("%d\n",b); //�����1
	printf("%d\n",sizeof(a));	//bool��ռ1���ֽ�
	return 0 ;
}
