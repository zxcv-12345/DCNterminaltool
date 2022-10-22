#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d,%d,%d,%d\n",&a,&b,&c,&d);
	if (a >= 1 && a != 0, b >= 1 && b != 0, c >= 1 && c != 0, d >= 1 && d != 0)
	{
		printf("输入的IP地址段合法IP地址如下\n");
		printf("%d.%d.%d.%d\n", a, b, c, d);
	}
	else
	{
		printf("输入的IP数值不合法！");
	}
}