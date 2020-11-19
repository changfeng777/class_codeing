#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//int main()
//{
//	// 00000000 00000000 00000000 00000001
//	// 00000000 00000000 00000000 00000010
//	// 00000000 00000000 00000000 00000011
//	int a = 1;
//	a = 2;
//	a = 3;
//	a = 15;
//	a = 16;
//
//	// 计算机内存二进制存储
//	// 00000000 00000000 00010010 00110100
//	// 内存窗口十六进制显示
//	// 00 00 12 34
//	// 00000000 00000000 00010010 00110100
//	int b = 4660;
//
//	// 按f9打断点 直接按f5运行到断点处
//	char ch = 'a';
//	char str1[] = { 'a', 'b', 'c', 'd','l' ,'\0'};
//	char str2[] = "abcdl";
//	char str3[] = "陕西";
//	str3[3] += 1;
//
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//
//	return 0;
//}

//int main()
//{
//	/* 多行代码 嵌套注释
//	printf("%c\n", '\'');
//	printf("%s\n", "\"hello\"");
//	printf("%s\n", "D:\\比特\\1-教学服务团队\\1-比特课件\\1.C语言课件\\C语言课件-V3\\初级");
//	printf("%s\n", "\tD:\\比特\\1-教学服务团队\\1-比特课件\\1.C语言课件\\C语言课件-V3\\初级");
//	*/
//
//	// 单行注释
//	//char a[] = "130";
//	printf("%d\n", strlen("\130"));
//	printf("%d\n", strlen("\138"));
//	printf("%d\n", strlen("\x13"));
//	printf("%d\n", strlen("\x18"));
//	printf("%d\n", strlen("\x6f"));
//	//printf("%d\n", strlen("\xg6")); 编译报错
//
//	printf("%d\n", strlen("abcdef"));
//	// \32被解析成一个转义字符
//	// 14 9 
//	printf("%d\n", strlen("c:\test\328\test.c"));
//
//
//	return 0;
//}

//int main()
//{
//	printf("加入比特\n");
//	int coding;
//	scanf("%d", &coding);
//	if (coding == 1)
//	{
//		printf("好好学习，拿offer\n");
//	}
//	else
//	{
//		printf("不学习，回家继承矿产\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int codingline = 0;
//	// 0就是假
//	// 非0就是真  一般==等判断以后给的是1
//	//printf("%d\n", codingline != 0);
//
//	//while (codingline < 100000)
//	while (codingline != 100000)
//	{
//		printf("写第%d行代码\n", codingline);
//
//		//codingline = codingline + 1;
//		codingline += 1;
//	}
//
//	printf("拿大厂offer, 再回宿舍打游戏\n");
//
//	return 0;
//}

//void Add(); // 声明一下
//
//int main()
//{
//	// 按f10进入调试模式，一行一行执行
//
//	// 调用函数
//	Add();
//	Add(); // 调试模式下要进入函数执行按f11
//	Add();
//
//	return 0;
//}
//
//// 返回值 函数名 参数列表
//void Add()   // 定义
//{
//	int num1, num2;
//	// 这样输入，就用逗号或者空格去间隔两个值
//	scanf("%d%d", &num1, &num2);
//	int ret = num1 + num2;
//	printf("%d + %d = %d\n", num1, num2, ret);
//}

//int main()
//{
//	int num1, num2;
//	// 这样输入，就用逗号去间隔两个值
//	//scanf("%d,%d", &num1, &num2);
//
//	// 这样输入，就用逗号或者空格去间隔两个值
//	scanf("%d%d", &num1, &num2);
//	int ret = num1 + num2;
//	printf("%d + %d = %d\n", num1, num2, ret);
//
//	scanf("%d%d", &num1, &num2);
//	ret = num1 + num2;
//	printf("%d + %d = %d\n", num1, num2, ret);
//
//	scanf("%d%d", &num1, &num2);
//	ret = num1 + num2;
//	printf("%d + %d = %d\n", num1, num2, ret);
//
//	return 0;
//}


// 返回值 函数名 参数列表
// void Add();
int Add(int a, int b)
{
	int c = a + b;
	return c;
}

//int main()
//{
//	int num1, num2;
//	// 这样输入，就用逗号或者空格去间隔两个值
//	scanf("%d%d", &num1, &num2);
//	int ret = Add(num1, num2);
//	printf("%d + %d = %d\n", num1, num2, ret);
//
//	return 0;
//}

int main()
{
	//int x = 0;
	//int a[5];

	//// 数组的下标是从0开始的
	//// 0 1 2 3
	//int b[40] = { 1, 2, 3 };
	//int c[] = { 10, 20 };

	//printf("%d %d %d %d\n", b[0], b[1], b[2], b[3]);

	//int i = 0;
	//while (i < 40)
	//{
	//	printf("%d ", b[i]);

	//	i += 1;
	//}
	//printf("\n");

	printf("%d", strlen("\xa"));

	return 0;
}