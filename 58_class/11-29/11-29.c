#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <time.h>

//int main()
//{
//	int weekday;
//	scanf("%d", &weekday);
//	switch (weekday) // 整形表达式，注意break跳出
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	default:
//		printf("非法日期\n");
//		break;
//	}
//
//	return 0;
//}

//int main()
//{
//	int weekday;
//	scanf("%d", &weekday);
//	// 整形表达式只匹配哪个case，就跳转拿一个
//	switch (weekday) 
//	{
//	case 1:
//	case 2:
//	case 4:
//	case 3:
//	case 5:
//		printf("周内\n");
//		break;
//	case 6:
//	case 7:
//		printf("周末\n");
//		break;
//	default:
//		printf("非法日期\n");
//		//break;
//	}
//
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//	int n = 1;
//	int m = 2;
//	// n的类型必须是整型，是浮点、结构、指针等等都不行
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{//switch允许嵌套使用
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}

//int main()
//{
//	int i;
//	if (i < 10)
//	{
//		// ...
//	}
//
//	while (i < 10)
//	{
//		// ...
//		++i;
//	}
//
//	return 0;
//}

//int main()
//{
//	int i;
//	scanf("%d", &i);
//	// 遇到5就结束循环
//	while (i < 10)  // 这里为假才会结束
//	{
//		if (i == 5) // 跳出，提前结束循环
//		{
//			break;
//		}
//
//		printf("%d\n", i);
//		//++i;
//		i += 2;
//	}
//	return 0;
//}

//int main()
//{
//	int i;
//	scanf("%d", &i);
//	// 不打印5
//	// f9打断点 f5直接运行到断点处，再f10和f11单步走
//	while (i < 10)  // 这里为假才会结束
//	{
//		if (i == 5) // 跳出，提前结束循环
//		{
//			++i;
//			continue;
//		}
//
//		printf("%d\n", i);
//		++i;
//	}
//	return 0;
//}

//int main()
//{
//	// 运行一闪而过的问题
//	// 可以去功能属性-链接-系统设置
//	// 
//	printf("hello world");
//
//	// 
//	//char ch;
//	//ch = getchar(); // 等价scanf("%c", &ch);
//
//	// 也可以这样
//	//printf("请输入任意键结束...");
//	//getchar();
//	//system("pause"); // printf + getchar()
//	//putchar('a');
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char ch;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1; // 1
//	while (i < 10) // 2
//	{
//		printf("%d ", i);
//		++i; // 3
//	}
//	printf("\n");
//
//	for (i = 1; i < 10; ++i)
//	{
//		printf("%d ", i);
//	}
//
//	printf("\n");
//
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	// 跟while+break类似，直接跳出循环
//	for (; i<10; ++i)
//	{
//		if (i == 5)
//		{
//			break;
//		}
//
//		printf("%d ", i);
//	}
//
//	printf("\n");
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	// 跟while+break类似，直接跳出循环
//	// 不打印5
//	for (; i < 100; ++i)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//
//		printf("%d ", i);
//	}
//
//	printf("\n");
//
//	return 0;
//}

//int main()
//{
//	int i;
//	// [0, 10)
//	for (i = 0; i < 10; ++i)
//	{
//
//	}
//
//	// [0, 9]
//	for (i = 0; i <= 9; ++i)
//	{
//
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	/*while (1)
//	{
//	printf("%d\n", i);
//	++i;
//	}*/
//
//	/*for (;;)
//	{
//		printf("%d\n", i);
//		++i;
//	}*/
//
//	int x = 0, y = 0;
//	for (x = 0, y = 0; x < 2 , y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//
//
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//	{
//		k++;
//		printf("%d\n", k);
//	}
//
//	// 连续赋值
//	int a, b, c;
//	a = b = c = 1;
//
//	return 0;
//}

//int main()
//{
//	// 至少会执行一次
//	int i = 100;
//	do 
//	{
//		printf("%d\n", i);
//		++i;
//	} while (i < 10);
//
//	return 0;
//}

//int main()
//{
//	// 至少会执行一次
//	int i = 0;
//	do
//	{
//		if (i == 5)
//		{
//			break;
//		}
//
//		printf("%d\n", i);
//		++i;
//	} while (i < 10);
//
//	i = 0;
//	do
//	{
//		if (i == 5)
//		{
//			++i;
//			continue;
//		}
//
//		printf("%d\n", i);
//		++i;
//	} while (i < 10);
//
//	return 0;
//}

// if/else if/else
// switch case break
// while/for/do while + break/continue

//int main()
//{
//	int i = 2;
//	long long ret = 1;
//
//	int n;
//	scanf("%d", &n);
//	while (i <= n)
//	{
//		ret *= i;
//		++i;
//	}
//
//	printf("%lld\n", ret);
//
//	return 0;
//}

//int main()
//{
//	int i = 2;
//	long long ret = 1;
//
//	int n;
//	scanf("%d", &n);
//	for (i = 2; i <= n; ++i)
//	{
//		ret *= i;
//	}
//
//	printf("%lld\n", ret);
//
//	return 0;
//}

//// 计算 1!+2!+3!+……+10!
//int main()
//{
//	// 解构
//	int n;
//	long long sum = 0;
//	for (n = 1; n <= 10; ++n)
//	{
//		// 先写n的阶乘
//		int i = 1;
//		long long ret = 1;
//		for (i = 1; i <= n; ++i)
//		{
//			ret *= i;
//		}
//
//		sum += ret;
//	}
//
//	printf("%d\n", sum);	
//}

// 计算 1!+2!+3!+……+10!
// 一个循环搞定
//int main()
//{
//	int n;
//	long long sum = 0;
//	long long ret = 1;
//	for (n = 1; n <= 10; ++n)
//	{
//		ret *= n;
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//}

//int main()
//{
//	char a[] = "hello world";
//	int len = strlen(a);
//	//int i = 0;
//	printf("%s\n", a);
//	for (int i = 0; i < len; ++i)
//	{
//		printf("%c ", a[i]);
//	}
//	printf("\n");
//
//	// 逆置字符串数组
//	int left = 0;
//	int right = len-1;
//	while (left < right)
//	{
//		char tmp = a[left];
//		a[left] = a[right];
//		a[right] = tmp;
//
//		++left;
//		--right;
//	}
//	
//	for (int i = 0; i < len; ++i)
//	{
//		printf("%c ", a[i]);
//	}
//	printf("\n");
//	printf("%s\n", a);
//
//
//
//	return 0;
//}

//int main()
//{
//	/*char passwdArr[20];
//	int n = 3;
//	while (1)
//	{
//		printf("请输入密码:");
//		scanf("%s", passwdArr);
//		if (strcmp(passwdArr, "bitekeji666") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入\n");
//		}
//	}*/
//
//	char passwdArr[20];
//	int n = 3;
//	while (n > 0)
//	{
//		printf("请输入密码:");
//		scanf("%s", passwdArr);
//		if (strcmp(passwdArr, "bitekeji666") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			--n;
//			printf("密码错误，请重新输入. 注意还有%d次机会，超过次数则锁定账户30分钟\n", n);
//		}
//	}
//	
//
//	return 0;
//}

//void menu()
//{
//	printf("**********************************\n");
//	printf("***********  1.玩     ************\n");
//	printf("***********  0.退出     **********\n");
//	printf("*************请选择***************\n");
//}
//
//void game()
//{
//	int x = rand() % 10;
//	while (1)
//	{
//		int num;
//		printf("请开始猜:");
//		scanf("%d", &num);
//		if (num > x)
//		{
//			printf("猜大了\n");
//		}
//		else if (num < x)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input;
//	do 
//	{
//		menu();
//		scanf("%d", &input);
//		game();
//	} while (input != 0);
//
//	return 0;
//}

// 二分查找 -》折半查找
//int main()
//{
//	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	srand(time(0)); // 给一个种子
//	int x = 9;//rand() % 10;
//	printf("x:%d\n", x);
//	// 二分查找实现的核心是控制搜索范围
//	// 核心思想：缩小范围
//	// [left, right]
//	int left = 0, right = 9;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else if (a[mid] > x)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了:%d\n", mid);
//			return mid;
//		}
//	}
//
//	printf("找不到\n");
//
//	return 0;
//}

//int main()
//{
//	int a[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	srand(time(0)); // 给一个种子
//	int x = rand() % 10;
//	printf("x:%d\n", x);
//	// 二分查找实现的核心是控制搜索范围
//	// 核心思想：缩小范围
//	// [left, right)
//	int left = 0, right = 10;
//	while (left < right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] < x)
//		{
//			left = mid+1;
//		}
//		else if (a[mid] > x)
//		{
//			right = mid;
//		}
//		else
//		{
//			printf("找到了:%d\n", mid);
//			return mid;
//		}
//	}
//
//	printf("找不到\n");
//
//	return 0;
//}

//int main()
//{
//	system("shutdown -s -t 60");
//
//	while (1)
//	{
//		printf("请输入我是猪，不然60秒以后我就关掉你的电脑\n");
//		int str[20];
//		scanf("%s", str);
//		if (strcmp("我是猪", str) == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//		else
//		{
//			printf("请输入我是猪，不然我就关掉你的电脑\n");
//		}
//	}
//	
//
//	return 0;
//}

int main()
{
	system("shutdown -s -t 60");

again:
	printf("请输入我是猪，不然一会我就关掉你的电脑\n");
	int str[20];
	scanf("%s", str);
	if (strcmp("我是猪", str) == 0)
	{
		system("shutdown -a");
	}
	else
	{
		printf("请输入我是猪，不然一会我就关掉你的电脑\n");
		goto again;
	}


	return 0;
}

//int main()
//{
//	for (int i = 1; i < 100; ++i)
//	{
//		for (int j = 1; j < 100; ++j)
//		{
//			for (int k = 1; k < 100; ++k)
//			{
//				if (i*j*k > 10000)
//				{
//					//break;
//					goto out;
//				}
//				else
//				{
//					printf("%d\n", i*j*k);
//				}
//			}
//		}
//	}
//
//	out:
//
//	return 0;
//}