#include<iostream>
using namespace std;
void SelectionSort(int arr[],int n)
{
    //arr = [4,3,2,1]
    for(int i=0; i<n-1; i++)
    {
        int minIndex = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}
int main()
{
    int arr[100];
    int n;
    cout << "Enter the size of the array:" << endl;
    cin >> n ;
    cout << "Enter the Array:" << endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i] ;
    }
    SelectionSort(arr, n);

        cout << "Sorted array: " << endl;
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

    return 0;
}
