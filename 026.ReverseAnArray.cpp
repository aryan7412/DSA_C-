#include<iostream>
using namespace std;
void printArray(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}
void Rev(int arr[], int n)
{
    int start = 0;
    int end = n-1;
    int temp;
    while(start <= end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    cout << "Reversed array is:" << endl;
    printArray(arr,n);
}
int main()
{
    int arr[100];
    int n;
    cout << "Enter the size of the array:" << endl;
    cin >> n ;
    cout << endl;
    cout << "Enter the elements of the array:" << endl;
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    Rev(arr,n);
    return 0;
}
