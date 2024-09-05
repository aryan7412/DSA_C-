#include<iostream>
using namespace std;
void BubbleSort(int arr[],int n)
{
    //arr = [4,3,2,1]
    for(int i=0; i<n-1; i++)
    {
        bool swapped = false;
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j+1]<arr[j])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
        {
            break;
        }
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
    BubbleSort(arr, n);

        cout << "Sorted array: " << endl;
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

    return 0;
}
