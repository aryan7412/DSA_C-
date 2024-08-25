#include <climits>
#include<iostream>
using namespace std;
int Max(int arr[],int n)
{
    int max = INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    return max;
}
int Min(int arr[],int n)
{
    int min = INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(arr[i]< min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int arr[100];
    int n;
    cout << "Enter the size of the array:" << endl;
    cin >> n ;
    for(int y=0; y<n; y++)
    {
        cin >> arr[y] ;
    }
    cout << "The maximum number in the array is:" << Max(arr,n) << endl;
    cout << "The minimum number in the array is:" << Min(arr,n) << endl;
}
