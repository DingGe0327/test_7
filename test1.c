#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()//逻辑与，逻辑或
{
	int a = 1;
	int b = 0;
	int c = a || b;
	printf("%d\n", c);
	return 0;
}
int main()
{
	int a = 1;
	int b = 0;
	int c = a && b;
	printf("%d\n", c);
	return 0;
}

#include <stdint.h>//条件操作符？（？ ：）
int main()
{
	int a = 0;
	int b = 9;
	int max = 0;
	if (a > b)
	{
		int max = a;
		printf("%d\n", max);
	}
	else
	{
		int max = b;
		printf("%d\n", max);
	}
	return 0;
}

int main()
{
	int a = 5;
	int b = 9;

	int max = a > b ? a : b;
	printf("%d\n", max);
	return 0;
}

#include <stdio.h>
int main()
{
	//extern 声明外部符号
	//extern int g_val;

	////int g_val = 200;
	printf("%d\n", g_val);

	return 0;
}

#include <stdio.h>
extern int Add(int x ,int y);
int main()
{
	int a = 1;
	int b = 2;
	int sum = Add(a,b);
	printf("%d\n", sum);
	return 0;
}

//define定义宏  宏是一种预处理指令，它提供了一种机制，可以用来替换源代码中的字符串，宏是用“#define"语句定义的，
#include <stdio.h>
//#define ADD(X,Y) X+Y
#define ADD(X,Y) ((X)+(Y))
int main()
{
	//printf("%d\n", 4 * (ADD(4, 3)));
	printf("%d\n", 4 * ADD(4, 3));
	return 0;
}









