#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//memset 内存设置
//memset(要改变的地址一般为数组，要替换的值（int），取前几个)

//如果需要在其他函数中传递数组的大小，需在主函数中先求出其大小
//原因：数组在参数传递中，传递的是首元素的地址，所以无法在其他函数中计算数组大小

//递归
//两个必要条件 1：存在限制条件，当满足这个限制条件的时候，递归便不再继续
//			   2：每次递归调用之后越来越接近这个限制条件
void print(unsigned int n)
{
	//实际过程：如果数值大于两位就除10，取前一位，并压栈，直到数值为1位，输出，并弹栈
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	unsigned int num = 0;
	scanf("%d", &num);//1234
	//递归-函数自己调用自己
	print(num);//print函数可以打印参数部分数字的每一位
	return 0;
}