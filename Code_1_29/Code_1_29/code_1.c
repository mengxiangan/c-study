#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ݹ�
//ʹ�õݹ��ǲ�Ҫʹ��++����ı䱾���ֵ
//�õݹ�ķ�ʽ���ַ�������

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "hello";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}
int count = 0;
//��ŵ������
void fac(int n, char a, char b, char c)
{
	if (n == 1)
	{
		count++;
		printf("��%d����%c�ƶ���%c\n",count,a,c);
		
	}
	else
	{
		fac(n - 1, a, c, b);
		count++;
		printf("��%d����%c�ƶ���%c\n", count, a, c);
		fac(n - 1, b, a, c);
	}
}

int main()
{

	int n = 0;
	scanf("%d", &n);
	fac(n, 'A', 'B', 'C');
	return 0;
}