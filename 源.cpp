#define _CRT_SECURE_NO_WARINGS 1
#include<stdio.h>
int main()
{//continue������������ѭ���ṹ�е�ʣ����䣬����������һ��ѭ��������breakһ��ֱ����������ѭ��
	int i = 0;
	for (i; i <= 5; i++)
	{
		if (i==0||i == 2 || i == 4)//����ӡż��
		{
			continue;
		}
		printf("%d\n",i);
	}
	return 0;
}