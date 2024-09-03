#include<iostream>
using namespace std;

int search(int arr[], int element, int n)
{
    int start = 0;
    int end = n - 1;
    int mid;

    while(start <= end)
    {
        mid = start + (end - start) / 2;

        if(arr[mid] == element)
        {
            return mid;
        }
        else if(arr[mid] < element)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[100], element, n;

    cout << "Enter the size of the array:" << endl;
    cin >> n;

    cout << "Enter the array elements:" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to search:" << endl;
    cin >> element;

    int index = search(arr, element, n);

    if(index != -1)
    {
        cout << "The index of the element is: " << index << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
