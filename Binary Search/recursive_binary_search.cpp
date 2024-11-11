#include <iostream>

using namespace std;

int binary_search(int arr[], int start, int end, int search_value);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int search_value;
    cout << "Please enter an integer number : " << endl;
    cin >> search_value;
    int start = 0;
    int end = arr_size - 1;
    int index = binary_search(arr, start, end, search_value);
    if (index == -1)
        cout << search_value << " is not found." << endl;
    else
        cout << search_value << " is found at index " << index << endl;
}

int binary_search(int arr[], int start, int end, int search_value)
{
    int mid = (start + end) / 2;
    if (arr[mid] == search_value)
        return mid;
    if (start > end)
        return -1;
    if (arr[mid] < search_value)
        return binary_search(arr, mid + 1, end, search_value);
    else
        return binary_search(arr, start, mid - 1, search_value);
}