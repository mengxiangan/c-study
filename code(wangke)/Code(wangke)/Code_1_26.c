#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//关于getchar
// 如果在getchar前面有scanf，注意要回收\n 
//int main()
//{
//	int ch = 0;
//	//由于字符在电脑中存储的是ASCII码，所以类型是int
//	//ctrl+z 结束读取
//	while ((ch = getchar() != EOF))
//	{
//		putchar(ch);
//	}
//}

//循环问题：计算1！+2！+...+10！
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	//方法1：
	//for (n = 1; n <= 10;n++) {
	//	ret = 1;//计算n的阶乘之前，把ret的值初始为1
	//	for (i = 1; i < n; i++)
	//	{
	//		ret *= i;
	//	}
	//	sum += ret;
	//}
	//方法2：
	for (n = 1; n <= 10; n++)
	{
		ret *= n;
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}