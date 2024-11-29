#include <iostream>

using namespace std;

void bubble_sort(int arr[], int arr_size);

int main()
{
    int arr[] = {50, 20, 40, 30, 10};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr, arr_size);

    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << "\t" << endl;
}

void bubble_sort(int arr[], int arr_size)
{
    int temp;
    for (int i = 0; i < arr_size; i++)
    {
        for (int j = i + 1; j < arr_size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}