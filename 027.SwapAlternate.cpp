#include<iostream>
using namespace std;
void printArray(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}
void SwapAlternate(int arr[],int n)
{
    int s=0 ,e=n-1 ,temp;
    while(s<n)
    {
        if(s+1<n)
        {
            temp = arr[s];
            arr[s] = arr[s+1];
            arr[s+1] = temp;
        }
        s+=2;
    }

    cout << "Alternate Swap:";
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
    SwapAlternate(arr,n);
}
