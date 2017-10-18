#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define length 10//定义输出的行数，建议13以下输出格式给%-4d，以上使用-%6d，且第28行printf()中应多加一个空格
int main()
{
	int arr[length][length] = { { 0 } };
	int j = 0;
	int k = 0;
	int i = 0;

	for (j = 0; j < length; j++)//对数组赋值
	{
		for (k = 0; k <= j; k++)
		{
			if ((0 == k) || (j == k))//数组每行第一个和最后一个都置1
			{
				arr[j][k] = 1;
			}
			else
			arr[j][k] = arr[j - 1][k - 1] + arr[j - 1][k];
		}

	}

	for (j = 0; j < length; j++)//打印
	{
		while (i < (length - 1))
		{
			printf("  ");
			i++;
		}
		for (k = 0; k <= j; k++)
		{
			printf("%-4d", arr[j][k]);//%-6d,以长度为6，左对齐的方式输出
			if (j == k)
				printf("\n");
		}
		i = j + 1;
	}


	return 0;
}
