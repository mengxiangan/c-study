#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*~按位取反 先把0变为1，把1变为0，得到补码
再推出其原码*/
/*register寄存器关键字
*signed 有符号的 可以表示正负
* unsigned 无符号的 不能表示正负
* union 联合体（共用体）暂不清楚
* volatile 暂不清楚
* typedef 类型重定义
* static 静态的
* extern 声明外部符号的
*/
//int main()
//{
//	//大量/频繁被使用的数据，放在寄存器中，提升效率
//	register int num = 100;
//	//建议num存放到寄存器中
//
//}

//typedef unsigned int u_int;
//int main()
//{
//	unsigned int num = 100;
//	u_int num = 100;
//	//这两行代码等价
//	return 0;
//}

//static 1.修饰局部变量，将局部变量从栈区移动到静态区，从而改变生命周期
//2.修饰全局变量，使得这个全局变量只能在自己所在的源文件中使用
//3.修饰函数，和2类似

//define 1.定义标识符常量 #define MAX 10000
//2.定义宏 #define ADD(X,Y) ((x)+(y))

