#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//pa�д��a�ĵ�ַ
//	*pa = 20;
//	//*�����ò�����ͨ����ַ�ҵ�a��ʵ�ʾ��Ǹ�a���¸�ֵ
//	printf("%d\n", a);
//	printf("%d\n", sizeof(char*));
//	return 0;
//}
 
//�ṹ��
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	struct Stu s = { "����",20,85.5 };//�ṹ��Ĵ����ͳ�ʼ��
//	printf("1: %s %d %lf\n", s.name, s.age, s.score);//�ṹ�����.��Ա����
//
//	struct Stu* ps = &s;
//	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//
//	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);
//
//	return 0;
//}