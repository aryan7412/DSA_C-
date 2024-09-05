#include<iostream>
using namespace std;
void InsertionSort(int arr[],int n)
{
    //arr = [4,3,2,1]
    for(int i=1; i<n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        for(;j>=0;j--)
        {
            if(temp < arr[j])
            {
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
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
    InsertionSort(arr, n);

        cout << "Sorted array: " << endl;
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

    return 0;
}
