#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//pa中存放a的地址
//	*pa = 20;
//	//*解引用操作，通过地址找到a，实质就是给a重新赋值
//	printf("%d\n", a);
//	printf("%d\n", sizeof(char*));
//	return 0;
//}
 
//结构体
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	struct Stu s = { "张三",20,85.5 };//结构体的创建和初始化
//	printf("1: %s %d %lf\n", s.name, s.age, s.score);//结构体变量.成员变量
//
//	struct Stu* ps = &s;
//	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//
//	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);
//
//	return 0;
//}