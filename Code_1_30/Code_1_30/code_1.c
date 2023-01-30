#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//用递归的方式实现数组元素反序
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

//实现步骤：
//1：先找个临时变量将首元素存起来
//2：将尾元素放到首元素的位置
//3：在尾元素上填充\0
//4：满足剩余元素大于等于两个时，重复调用
//5：再将首元素赋给尾元素

//实现原理：
//将首尾元素对调，然后不断缩小元素个数，重复调用，最后重新赋值
void reverse_string(char* str)
{
	char tmp = *str;//1
	int len = my_strlen(str);
	*str = *(str + len - 1);//2
	*(str + len - 1) = '\0';//3
	if (my_strlen(str + 1) >= 2)
	{
		reverse_string(str + 1);//4
	}
	*(str + len - 1) = tmp;//5
}

int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);//要求输出fedcba
	return 0;
}