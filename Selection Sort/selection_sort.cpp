#include <iostream>

using namespace std;

void selection_sort(int arr[], int arr_size);

int main()
{
    int arr[] = {50, 20, 40, 30, 10};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    selection_sort(arr, arr_size);

    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << "\t" << endl;
}

void selection_sort(int arr[], int arr_size)
{
    int temp, min_index;
    for (int i = 0; i < arr_size; i++)
    {
        min_index = i;
        for (int j = i + 1; j < arr_size; j++)
        {
            if (arr[j] < arr[min_index])
                min_index = j;
        }
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}