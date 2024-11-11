#include <iostream>

using namespace std;

int Linear_search(int arr[], int arr_size, int search_value);

int main()
{

    int arr[] = {2, 3, 6, 5, 1, 9, 8, 7, 4};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int search_value;
    cout << "Please enter an integer number : " << endl;
    cin >> search_value;
    int index = Linear_search(arr, arr_size, search_value);

    if (index != -1)
        cout << search_value << " is found at index " << index << endl;
    else
        cout << search_value << " is not found." << endl;

    return 0;
}
int Linear_search(int arr[], int arr_size, int search_value)
{
    int index = -1;
    for (int i = 0; i < arr_size; i++)
    {
        if (arr[i] == search_value)
        {
            index = i;
            break;
        }
    }
    return index;
}