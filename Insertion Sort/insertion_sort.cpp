#include <iostream>

using namespace std;

void insertion_sort(int arr[], int arr_size);

int main()
{
    int arr[] = {50, 20, 40, 30, 10};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    insertion_sort(arr, arr_size);

    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << "\t" << endl;
}

void insertion_sort(int arr[], int arr_size)
{
    int value, index;
    for (int i = 1; i < arr_size; i++)
    {
        value = arr[i];
        index = i;
        while (index > 0 && arr[index - 1] > value)
        {
            arr[index] = arr[index - 1];
            index--;
        }
        arr[index] = value;
    }
}