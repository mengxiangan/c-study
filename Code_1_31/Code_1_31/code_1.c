#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//数组的冒泡排序
void bubble_sort(int arr[], int sz)
{
	//确定趟数
	int i = 0;
	for (i = 0; i < sz-1; i++)
	{
		//一趟冒泡排序
		int j = 0;
		int flag = 1;
		for (j = 0; j < sz-1-i; j++) 
		{
			if (arr[j] > arr[j + 1])
			{
				//交换
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//计算数组元素个数
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	return 0;
}

//数组名就是首元素的地址
//有两个例外
//1：sizeof(arr) -数组名表示的是整个数组
//2：&arr -数组名表示整个数组 -取出整个数组的地址