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
//	// ������ڴ�����ƴ洢
//	// 00000000 00000000 00010010 00110100
//	// �ڴ洰��ʮ��������ʾ
//	// 00 00 12 34
//	// 00000000 00000000 00010010 00110100
//	int b = 4660;
//
//	// ��f9��ϵ� ֱ�Ӱ�f5���е��ϵ㴦
//	char ch = 'a';
//	char str1[] = { 'a', 'b', 'c', 'd','l' ,'\0'};
//	char str2[] = "abcdl";
//	char str3[] = "����";
//	str3[3] += 1;
//
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//
//	return 0;
//}

//int main()
//{
//	/* ���д��� Ƕ��ע��
//	printf("%c\n", '\'');
//	printf("%s\n", "\"hello\"");
//	printf("%s\n", "D:\\����\\1-��ѧ�����Ŷ�\\1-���ؿμ�\\1.C���Կμ�\\C���Կμ�-V3\\����");
//	printf("%s\n", "\tD:\\����\\1-��ѧ�����Ŷ�\\1-���ؿμ�\\1.C���Կμ�\\C���Կμ�-V3\\����");
//	*/
//
//	// ����ע��
//	//char a[] = "130";
//	printf("%d\n", strlen("\130"));
//	printf("%d\n", strlen("\138"));
//	printf("%d\n", strlen("\x13"));
//	printf("%d\n", strlen("\x18"));
//	printf("%d\n", strlen("\x6f"));
//	//printf("%d\n", strlen("\xg6")); ���뱨��
//
//	printf("%d\n", strlen("abcdef"));
//	// \32��������һ��ת���ַ�
//	// 14 9 
//	printf("%d\n", strlen("c:\test\328\test.c"));
//
//
//	return 0;
//}

//int main()
//{
//	printf("�������\n");
//	int coding;
//	scanf("%d", &coding);
//	if (coding == 1)
//	{
//		printf("�ú�ѧϰ����offer\n");
//	}
//	else
//	{
//		printf("��ѧϰ���ؼҼ̳п��\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int codingline = 0;
//	// 0���Ǽ�
//	// ��0������  һ��==���ж��Ժ������1
//	//printf("%d\n", codingline != 0);
//
//	//while (codingline < 100000)
//	while (codingline != 100000)
//	{
//		printf("д��%d�д���\n", codingline);
//
//		//codingline = codingline + 1;
//		codingline += 1;
//	}
//
//	printf("�ô�offer, �ٻ��������Ϸ\n");
//
//	return 0;
//}

//void Add(); // ����һ��
//
//int main()
//{
//	// ��f10�������ģʽ��һ��һ��ִ��
//
//	// ���ú���
//	Add();
//	Add(); // ����ģʽ��Ҫ���뺯��ִ�а�f11
//	Add();
//
//	return 0;
//}
//
//// ����ֵ ������ �����б�
//void Add()   // ����
//{
//	int num1, num2;
//	// �������룬���ö��Ż��߿ո�ȥ�������ֵ
//	scanf("%d%d", &num1, &num2);
//	int ret = num1 + num2;
//	printf("%d + %d = %d\n", num1, num2, ret);
//}

//int main()
//{
//	int num1, num2;
//	// �������룬���ö���ȥ�������ֵ
//	//scanf("%d,%d", &num1, &num2);
//
//	// �������룬���ö��Ż��߿ո�ȥ�������ֵ
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


// ����ֵ ������ �����б�
// void Add();
int Add(int a, int b)
{
	int c = a + b;
	return c;
}

//int main()
//{
//	int num1, num2;
//	// �������룬���ö��Ż��߿ո�ȥ�������ֵ
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

	//// ������±��Ǵ�0��ʼ��
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