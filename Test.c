#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

void bubble_sort(int arr[], int sz)
{
	int flag = 1;
	int i;
	for (i = 0; i < sz - 1; i++)
	{
		int j;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
		{ 
			break;
		}
	}
}

int main()
{
	//对数组arr进行排序，拍成升序
	int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	// 冒泡排序函数
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	int i;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}