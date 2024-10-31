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

