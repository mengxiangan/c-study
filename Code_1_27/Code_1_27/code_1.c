#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���ַ�����
//int main() 
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 71;//Ҫ���ҵ�����
//	//��arr�������������в���k (7)��ֵ
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����Ԫ�ظ���
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left+right) / 2;
//		if(arr[mid]<k)
//		{
//			left =  mid+ 1;
//		}
//		else if(arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("û�ҵ�");
//	}
//}

//Sleep(1000);˯��1��
//system����cls�����������Ļ
//strcmp �����ַ�����Ƚ�

//���������
//����rand����ǰ�����srand����
//srand((unsigned int)time(NULL));
//�����װ�������У�Ҫ�ڵ��ú���֮ǰʹ��srand������ֻ�����һ�Σ���ε��û᲻���
//rand()%100+1//%100����������0-99��Ȼ��+1����Χ����1-100

//�����Լ��
// ***********��̫����
//շת�����
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);//24 18
	int t = 0;
	//��һ��ѭ����m=24,n=18,t=6
	//�ڶ���ѭ����m=18,n=6,t=0
	//û�����ж�m��n�Ĵ�С����ʹ�Ƿ��ľ���һ��ѭ���������
	while (t =m%n) 
	{
		m = n;
		n = t;
	}
	printf("���Լ����%d", n);
	return 0;
}

//��С������ = m*n/���Լ��