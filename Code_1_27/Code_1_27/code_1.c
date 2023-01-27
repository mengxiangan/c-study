#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//二分法查找
//int main() 
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 71;//要查找的数字
//	//在arr这个有序的数组中查找k (7)的值
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组的元素个数
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
//			printf("找到了，下表是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("没找到");
//	}
//}

//Sleep(1000);睡眠1秒
//system（“cls”）；清空屏幕
//strcmp 两个字符串相比较

//生成随机数
//先在rand函数前面调用srand函数
//srand((unsigned int)time(NULL));
//如果封装到函数中，要在调用函数之前使用srand函数，只需调用一次，多次调用会不随机
//rand()%100+1//%100的余数就是0-99，然后+1，范围就是1-100

//求最大公约数
// ***********不太明白
//辗转相除法
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);//24 18
	int t = 0;
	//第一次循环：m=24,n=18,t=6
	//第二次循环：m=18,n=6,t=0
	//没必须判断m和n的大小，即使是反的经过一次循环后就正了
	while (t =m%n) 
	{
		m = n;
		n = t;
	}
	printf("最大公约数：%d", n);
	return 0;
}

//最小公倍数 = m*n/最大公约数