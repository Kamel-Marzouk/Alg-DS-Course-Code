#include <iostream>

using namespace std;

int binary_search(int arr[], int arr_size, int search_value);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int search_value;
    cout << "Please enter an integer number : " << endl;
    cin >> search_value;
    int index = binary_search(arr, arr_size, search_value);
    if (index == -1)
        cout << search_value << " is not found." << endl;
    else
        cout << search_value << " is found at index " << index << endl;
}

int binary_search(int arr[], int arr_size, int x)
{
    int start = 0;
    int end = arr_size - 1;
    int mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}