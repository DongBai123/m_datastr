#include<iostream>
#include<vector>
using namespace std;
bool is_zf(vector<int> arr,int n)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
		{
			return true;
		}
		
	}
	return false;
}
int main()
{
	int n;
	cin >> n;
	vector<int> dp(n);//
	vector<int> arr(n);
	int length;
	int indexhead;
	int index;
	int result = arr[0];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	//初始化
	dp[0] = arr[0];
	length = 1;
	index = 0;
	result = dp[0];
	if (!is_zf(arr,n))
	{
		cout << 0 << endl;
		cout << -1 << " " << -1;
	}
	else
	{
		for (int i = 1; i < n; i++)
		{
			if (dp[i - 1] + arr[i] < arr[i])
			{
				dp[i] = arr[i];
			}
			else
			{
				dp[i] = dp[i - 1] + arr[i];
			}
			if (dp[i] > result)
			{
				result = dp[i];
				index = i;
			}
		}
		int sum = result;
		for (int i = index; i >= 0; i--)
		{
			sum -= arr[i];
			if (sum == 0)
			{
				indexhead = i;
			}
		}
		cout << result << endl;
		cout << indexhead << " " << index;
	}
	return 0;
}
