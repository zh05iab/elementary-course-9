#define _CRT_SECURE_NO_WARINGS 1
#include<stdio.h>
int main()
{//continue的作用是跳过循环结构中的剩余语句，进而进入下一次循环，不像break一样直接跳出整个循环
	int i = 0;
	for (i; i <= 5; i++)
	{
		if (i==0||i == 2 || i == 4)//不打印偶数
		{
			continue;
		}
		printf("%d\n",i);
	}
	return 0;
}