
#include<iostream>
using namespace std;
void insert_sort(int arr[], int n)
{
    int temp;
    int j;
    for (int i = 1; i < n; i++)
    {
        //如果大于前驱，进行移动操作
        if (arr[i] < arr[i - 1])
        {
            temp = arr[i];
            for (j = i - 1; j>=0&& arr[j] > temp; j--)
            {
                arr[j + 1] = arr[j];
            }
        }
     
        arr[j+1] = temp;
    }

    }
    int main()
    {
        int arr[6] = { 5 ,4 ,1 ,2, 3,6 };
        insert_sort(arr, 6);
        for (int i = 0; i < 6; i++)
        {
            cout << arr[i] << " ";
        }



        return 0;
    }
