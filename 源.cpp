#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf_s("%d%d%d%d", &a, &b, &c, &d);
	if (a >= 255 && b >= 255 && c >= 255 && d >= 255)
	{
		printf("输入的IP数值不合法！原因：“输入的IP数值可能是广播号或无效IP数值”");
	}
	else if (a <= 1 && b <= 1 && c <= 1 && d <= 1)
	{
		printf("输入的IP数值不合法！原因：“输入的IP数值可能是网络号或无效IP数值”");
	}
	else if (a >= 1 && b >= 1 && c >= 1 && d >= 1)
	{
		printf("输入的IP地址段合法IP地址如下\n");
		printf("%d.%d.%d.%d\n", a, b, c, d);
	}
	else
	{
		printf("输入的IP数值不合法！");
	}
}

