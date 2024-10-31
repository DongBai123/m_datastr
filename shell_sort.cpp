#include<iostream>
using namespace std;
void shell_sort(int arr[], int n)
{
	int d, j, i;
	for (int d = n / 2; d >= 1; d = d / 2)//每趟的间隔
	{
		for (i = d + 1; i <= n; i++)//对每段数字排序
		{
			arr[0] = arr[i];//arr[0]暂存,并不是哨兵!!!
			if (arr[i-d] > arr[i])
			{
				for (j = i - d; arr[0] < arr[j] && j >= 1 ;j -= d)
				{
					arr[j + d] = arr[j];
				}
				arr[j + d] = arr[0];
			}
			
		}
	}

}
int main()
{
	int arr[10] = { 0,9,6,1,2,7,8,5,3,2 };
	shell_sort(arr, 9);
	for (int i = 1; i <= 9; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}
