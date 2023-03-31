#define  _CRT_SECURE_NO_WARNINGS 1

//全局变量
//int g_val = 100;

static int g_val = 100;

//static修饰的全局变量只能在自己所在的源文件（.c）内部使用
int Add(int x, int y)
{
	return x + y;
}

