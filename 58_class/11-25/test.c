#include <stdio.h>

// ������ƽ����д

#define N 20

// �꺯��->���������ĺ���, �÷�����
// ���滻
#define ADD(a, b) (a+b)

// ������������ȷ�ģ��漰����������ȼ� �Ժ��ٽ�
// #define ADD(a, b) ((a)+(b))

// ����
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
//	// �˽�һ�¾�ok���Ժ󻹻���ϸ��
//	//  ���ã������ܿ���
//	Add(1, 2);
//
//	// �滻����
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
//	// a�ĵ�ַ��ʲô��
//	// %u �޷�������
//	printf("%u\n", &a);
//	printf("%u\n", &b);
//	printf("%u\n\n", &c);
//
//
//	printf("%p\n", &a);
//	printf("%p\n", &b);
//	printf("%p\n", &c);
//
//	// Ҫ�������ȥ��a��b��c�ĵ�ַ��
//	// ��ô��������ͽ�ָ�����
//	int* pa = &a;
//	*pa = 20;
//
//	//pa = &b;
//	char* pb = &b;
//	pa = &c; 
//	*pb = 'b';
//	*pa = 30;
//
//     // 32����ָ���� 4byte  64λ���� ָ����8byte
//	printf("%d\n", sizeof(pa)); // int*
//	printf("%d\n", sizeof(pb)); // char*
//
//	return 0;
//}

// ����������-- �ṹ��
// ���˽�һ�£��Ժ����ϸ��
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
//	// int   ==   struct Student ����
//
//	struct Student yang = {"����Զ", 18, "1��¥����Ԫ301"};
//	struct Student li = { "����", 18, "1��¥����Ԫ302" };
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
//		printf("������\n");
//	}
//	else
//	{
//		printf("��̥��\n");
//	}
//
//	if (age < 18)
//		printf("δ������\n");
//	else if (age >= 18 && age < 30)
//		printf("����\n");
//	else if (age >= 30 && age < 60)
//		printf("����\n");
//	else if (age >= 60 && age < 90)
//		printf("����\n");
//	else
//		printf("������\n");
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	// else ����������Ǹ�if����ƥ��
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
//	// �����������Ƕ����䣬�ǵ���{}������
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
//		printf("����\n");
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
	// ����ȥ
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