#include <stdio.h>

// 宏的名称建议大写

#define N 20

// 宏函数->不是真正的函数, 用法相似
// 宏替换
#define ADD(a, b) (a+b)

// 这样才是最正确的，涉及运算符的优先级 以后再讲
// #define ADD(a, b) ((a)+(b))

// 函数
int Add(int a, int b)
{
	return a + b;
}

//int main()
//{
//	//int a[N];
//	//// ...
//	//int i = 0;
//	//while (i < N)
//	//{
//	//}
//
//	// 了解一下就ok，以后还会详细讲
//	//  调用，有性能开销
//	Add(1, 2);
//
//	// 替换机制
//	// #define ADD(a, b) a+b
//	ADD(1, 2); // 1+2;
//
//	printf("%d\n", Add(1, 2) * 3);
//	printf("%d\n", ADD(1, 2) * 3);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	char b = 'a';
//	static int c = 20;
//
//	// a的地址是什么？
//	// %u 无符号整形
//	printf("%u\n", &a);
//	printf("%u\n", &b);
//	printf("%u\n\n", &c);
//
//
//	printf("%p\n", &a);
//	printf("%p\n", &b);
//	printf("%p\n", &c);
//
//	// 要求定义变量去存a、b、c的地址，
//	// 那么这个变量就叫指针变量
//	int* pa = &a;
//	*pa = 20;
//
//	//pa = &b;
//	char* pb = &b;
//	pa = &c; 
//	*pb = 'b';
//	*pa = 30;
//
//     // 32进程指针是 4byte  64位进程 指针是8byte
//	printf("%d\n", sizeof(pa)); // int*
//	printf("%d\n", sizeof(pb)); // char*
//
//	return 0;
//}

// 多个数据组合-- 结构体
// 先了解一下，以后会再细讲
//typedef struct Student
//{
//	char name[20];
//	int age;
//	char addr[50];
//}STU;
//
//typedef struct Student Stu;
//
//int main()
//{
//	// int   ==   struct Student 类型
//
//	struct Student yang = {"杨致远", 18, "1号楼二单元301"};
//	struct Student li = { "李宁", 18, "1号楼二单元302" };
//
//	printf("%s, %d, %s\n", yang.name, yang.age, yang.addr);
//
//	struct Student* ps = &yang;
//	printf("%s, %d, %s\n", ps->name, ps->age, ps->addr);
//
//	Stu jack;
//	STU rose;
//		
//	return 0;
//}

//int main()
//{
//	int age;
//	scanf("%d", &age);
//
//	printf("%d\n", age < 18);
//	printf("%d\n", age > 18);
//
//	if (age)
//	{
//		printf("出生了\n");
//	}
//	else
//	{
//		printf("娘胎里\n");
//	}
//
//	if (age < 18)
//		printf("未成年人\n");
//	else if (age >= 18 && age < 30)
//		printf("青年\n");
//	else if (age >= 30 && age < 60)
//		printf("中年\n");
//	else if (age >= 60 && age < 90)
//		printf("老年\n");
//	else
//		printf("老寿星\n");
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	// else 跟他最近的那个if进行匹配
//	int a = 1;
//	int b = 2;
//	/*if (a == 1)
//	{
//	if (b == 2)
//	{
//	printf("hehe\n");
//	}
//	else
//	{
//	printf("haha\n");
//	}
//	}*/
//
//	/*if (a == 1)
//		a++;*/
//
//	// 如果后面跟的是多个语句，记得用{}括起来
//	if (a == 1)
//	{
//		a++;
//		b++;
//	}
//
//	printf("%d, %d\n", a, b);
//
//	return 0;
//}

//int max(int a, int b)
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//}

int max(int a, int b)
{
	if (a > b)
		return a;

	return b;
}

//int main()
//{
//	int a = 0;
//
//	//if (a == 0)
//	/*if (0 == a)
//	{
//		printf("hehe\n");
//	}*/
//
//	if (a % 2 != 0)
//	{
//		printf("奇数\n");
//	}
//
//	int i = 0;
//	while (i < 100)
//	{
//		if (i % 2 != 0)
//		{
//			printf("%d\n", i);
//		}
//
//		++i;
//	}
//
//	return 0;
//}

int main()
{
	int n = 10;
	int ret = 1;
	int i = 1;
	int j = 1;
	// 尝试去
	while (n)
	{
		i = 1;
		while (i <= n)
		{
			ret *= i;
			++i;
		}

		--n;
	}


	return 0;
}