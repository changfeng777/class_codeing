#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <time.h>

//int main()
//{
//	int weekday;
//	scanf("%d", &weekday);
//	switch (weekday) // ���α��ʽ��ע��break����
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("�Ƿ�����\n");
//		break;
//	}
//
//	return 0;
//}

//int main()
//{
//	int weekday;
//	scanf("%d", &weekday);
//	// ���α��ʽֻƥ���ĸ�case������ת��һ��
//	switch (weekday) 
//	{
//	case 1:
//	case 2:
//	case 4:
//	case 3:
//	case 5:
//		printf("����\n");
//		break;
//	case 6:
//	case 7:
//		printf("��ĩ\n");
//		break;
//	default:
//		printf("�Ƿ�����\n");
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
//	// n�����ͱ��������ͣ��Ǹ��㡢�ṹ��ָ��ȵȶ�����
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{//switch����Ƕ��ʹ��
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
//	// ����5�ͽ���ѭ��
//	while (i < 10)  // ����Ϊ�ٲŻ����
//	{
//		if (i == 5) // ��������ǰ����ѭ��
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
//	// ����ӡ5
//	// f9��ϵ� f5ֱ�����е��ϵ㴦����f10��f11������
//	while (i < 10)  // ����Ϊ�ٲŻ����
//	{
//		if (i == 5) // ��������ǰ����ѭ��
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
//	// ����һ������������
//	// ����ȥ��������-����-ϵͳ����
//	// 
//	printf("hello world");
//
//	// 
//	//char ch;
//	//ch = getchar(); // �ȼ�scanf("%c", &ch);
//
//	// Ҳ��������
//	//printf("���������������...");
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
//	// ��while+break���ƣ�ֱ������ѭ��
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
//	// ��while+break���ƣ�ֱ������ѭ��
//	// ����ӡ5
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
//	// ������ֵ
//	int a, b, c;
//	a = b = c = 1;
//
//	return 0;
//}

//int main()
//{
//	// ���ٻ�ִ��һ��
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
//	// ���ٻ�ִ��һ��
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

//// ���� 1!+2!+3!+����+10!
//int main()
//{
//	// �⹹
//	int n;
//	long long sum = 0;
//	for (n = 1; n <= 10; ++n)
//	{
//		// ��дn�Ľ׳�
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

// ���� 1!+2!+3!+����+10!
// һ��ѭ���㶨
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
//	// �����ַ�������
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
//		printf("����������:");
//		scanf("%s", passwdArr);
//		if (strcmp(passwdArr, "bitekeji666") == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//	}*/
//
//	char passwdArr[20];
//	int n = 3;
//	while (n > 0)
//	{
//		printf("����������:");
//		scanf("%s", passwdArr);
//		if (strcmp(passwdArr, "bitekeji666") == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			--n;
//			printf("�����������������. ע�⻹��%d�λ��ᣬ���������������˻�30����\n", n);
//		}
//	}
//	
//
//	return 0;
//}

//void menu()
//{
//	printf("**********************************\n");
//	printf("***********  1.��     ************\n");
//	printf("***********  0.�˳�     **********\n");
//	printf("*************��ѡ��***************\n");
//}
//
//void game()
//{
//	int x = rand() % 10;
//	while (1)
//	{
//		int num;
//		printf("�뿪ʼ��:");
//		scanf("%d", &num);
//		if (num > x)
//		{
//			printf("�´���\n");
//		}
//		else if (num < x)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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

// ���ֲ��� -���۰����
//int main()
//{
//	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	srand(time(0)); // ��һ������
//	int x = 9;//rand() % 10;
//	printf("x:%d\n", x);
//	// ���ֲ���ʵ�ֵĺ����ǿ���������Χ
//	// ����˼�룺��С��Χ
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
//			printf("�ҵ���:%d\n", mid);
//			return mid;
//		}
//	}
//
//	printf("�Ҳ���\n");
//
//	return 0;
//}

//int main()
//{
//	int a[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	srand(time(0)); // ��һ������
//	int x = rand() % 10;
//	printf("x:%d\n", x);
//	// ���ֲ���ʵ�ֵĺ����ǿ���������Χ
//	// ����˼�룺��С��Χ
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
//			printf("�ҵ���:%d\n", mid);
//			return mid;
//		}
//	}
//
//	printf("�Ҳ���\n");
//
//	return 0;
//}

//int main()
//{
//	system("shutdown -s -t 60");
//
//	while (1)
//	{
//		printf("��������������Ȼ60���Ժ��Ҿ͹ص���ĵ���\n");
//		int str[20];
//		scanf("%s", str);
//		if (strcmp("������", str) == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//		else
//		{
//			printf("��������������Ȼ�Ҿ͹ص���ĵ���\n");
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
	printf("��������������Ȼһ���Ҿ͹ص���ĵ���\n");
	int str[20];
	scanf("%s", str);
	if (strcmp("������", str) == 0)
	{
		system("shutdown -a");
	}
	else
	{
		printf("��������������Ȼһ���Ҿ͹ص���ĵ���\n");
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