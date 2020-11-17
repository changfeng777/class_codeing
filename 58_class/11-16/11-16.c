#include <stdio.h>

//int main()
//{
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	return 0;
//}

//int main()
//{
//	// 类型 名称
//	int a = 10;
//	int b = 3;
//	//int c, d, e, f;
//
//	// %d int
//	// %lld long long
//	// %f   float double
//	// %lf  double
//	// %c   char
//	printf("%d\n", a + b);
//	printf("%d\n", a / b);
//
//	printf("%lf\n", (double)a / (double)b);
//	printf("%.10lf\n", (float)a / (float)b);
//	printf("%.10lf\n", (double)a / (double)b);
//
//	// = 赋值
//	// == 等号
//	double d1 = 10.0;
//	double d3 = 3.0;
//	printf("%lf\n", d1 / d3);
//
//	int i = 10; // 常量整形默认int类型
//	double d = 1.11; // 常量浮点数默认是double类型
//	float f = 1.11111f; // 
//	double dd = 1.11111111111111111111f;
//	printf("%.16lf\n", dd);
//
//	return 0;
//}

// 全局变量
//int c = 1;
//
//int main()
//{
//	// 局部变量
//	int a = 0;
//	{
//		int b = 0;
//		printf("%d %d %d\n", a, b, c);
//	}
//	// 为什么这里不能使用b，因为b出了作用域{}
//	// 已经销毁还给系统了
//	//printf("%d %d %d\n", a, b, c);
//	printf("%d %d\n", a, c);
//
//	return 0;
//}

//int c = 1;
//
//void func1()
//{
//	c = 10;
//}
//
//int main()
//{
//	// 局部变量
//	int a = 0;
//	func1();
//
//	printf("%d %d\n", a, c);
//
//	return 0;
//}

//int a = 1;
//
//int main()
//{
//	// 就近原则
//	int a = 2;
//	printf("%d\n", a);
//
//	return 0;
//}

enum Sex
{
	MALE= 10,
	FEMALE = 12,
	SECRET
};

//int main()
//{
//	// 字面常量
//	3.14;  // double
//	10000; // int
//	'v';   // char
//	"hell world"; // const char* 后面讲
//	"中国";
//
//	// 常变量
//	const int n = 10;
//	//n = 2;
//
//	//int a[10];
//	//int a[n];
//
//	// 宏常量
//    #define N 10
//	int a[N];
//
//	// 底层本质是整形常量
//	enum Sex s;
//	s = MALE;
//
//	printf("%d", MALE);
//	printf("%d", FEMALE);
//
//
//	return 0;
//}

//int main()
//{
//	/*int a1[10] = { 1, 2, 3 };
//	int a2[] = {1,2,3};*/
//	// f10 调试查看 
//	char str1[] = { 'a', 'b', 'c' };
//	char str2[] = "abc";
//
//	// sizeof 算数组的大小
//	printf("%d\n", sizeof(str1));
//	printf("%d\n", sizeof(str2));
//
//	// strlen 算字符串长度（从开始位置遇到\0为止，但是不包含\0）
//	printf("%d\n", strlen(str1));
//	printf("%d\n", strlen(str2));
//
//	return 0;
//}

int main()
{
	printf("c:\code\test.c\n");

	printf("\\n");

	return 0;
}