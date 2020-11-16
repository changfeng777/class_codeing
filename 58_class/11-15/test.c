#include<stdio.h>

// 选中代码 ctrl + k + c  注释
//int main()
//{
//	printf("hello world");
//
//	return 0;
//}

// 一个项目中只能有一个main入口函数 
// 第二种注释方式  
/*int main()
{
	printf("hello world");

	return 0;
}
*/

int main()
{
	//printf("change world");
	int a;
	int b;
	scanf("%d%d", &a, &b);
	printf("a+b:%d\n", a + b);
	printf("a/b:%f\n", a / b);


	return 0;
}