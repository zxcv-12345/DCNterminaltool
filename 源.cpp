#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d,%d,%d,%d\n",&a,&b,&c,&d);
	if (a >= 1 && a != 0, b >= 1 && b != 0, c >= 1 && c != 0, d >= 1 && d != 0)
	{
		printf("�����IP��ַ�κϷ�IP��ַ����\n");
		printf("%d.%d.%d.%d\n", a, b, c, d);
	}
	else
	{
		printf("�����IP��ֵ���Ϸ���");
	}
}