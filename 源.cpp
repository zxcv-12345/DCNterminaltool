#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf_s("%d%d%d%d", &a, &b, &c, &d);
	if (a >= 255 && b >= 255 && c >= 255 && d >= 255)
	{
		printf("�����IP��ֵ���Ϸ���ԭ�򣺡������IP��ֵ�����ǹ㲥�Ż���ЧIP��ֵ��");
	}
	else if (a <= 1 && b <= 1 && c <= 1 && d <= 1)
	{
		printf("�����IP��ֵ���Ϸ���ԭ�򣺡������IP��ֵ����������Ż���ЧIP��ֵ��");
	}
	else if (a >= 1 && b >= 1 && c >= 1 && d >= 1)
	{
		printf("�����IP��ַ�κϷ�IP��ַ����\n");
		printf("%d.%d.%d.%d\n", a, b, c, d);
	}
	else
	{
		printf("�����IP��ֵ���Ϸ���");
	}
}

