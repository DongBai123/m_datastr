#include<iostream>
using namespace std;
void Half_Insert_Sort(int arr[], int n)
{
	int i, j;
	int low, high, mid;
	for (int i = 2; i <=n; i++)
	{
		arr[0] = arr[i];
		low = 1, high = i - 1;


	
		while (low <= high)
		{
			mid = (low + high) / 2;
			if (arr[i] < arr[mid])
			{
			
				high = mid - 1;
			}
			else
			{
				low = mid + 1;
			}
		}
		for (j = i - 1; j >=high+1; j--)
		{
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = arr[0];//arr[high+1]也可以
	}
}
int main()
{
	int arr[6] = { 0,3,5,4,1,2 };
	Half_Insert_Sort(arr, 5);
	for (int i = 1; i <= 5; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}
