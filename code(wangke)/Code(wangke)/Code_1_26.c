#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����getchar
// �����getcharǰ����scanf��ע��Ҫ����\n 
//int main()
//{
//	int ch = 0;
//	//�����ַ��ڵ����д洢����ASCII�룬����������int
//	//ctrl+z ������ȡ
//	while ((ch = getchar() != EOF))
//	{
//		putchar(ch);
//	}
//}

//ѭ�����⣺����1��+2��+...+10��
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	//����1��
	//for (n = 1; n <= 10;n++) {
	//	ret = 1;//����n�Ľ׳�֮ǰ����ret��ֵ��ʼΪ1
	//	for (i = 1; i < n; i++)
	//	{
	//		ret *= i;
	//	}
	//	sum += ret;
	//}
	//����2��
	for (n = 1; n <= 10; n++)
	{
		ret *= n;
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}