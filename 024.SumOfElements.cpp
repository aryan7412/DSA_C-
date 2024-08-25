#include<iostream>
using namespace std;
int Sum(int arr[],int n)
{
    int sum=0;
    for(int y=0; y<n; y++)
    {
        sum = sum + arr[y];
    }
    return sum;
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
    cout << "The sum of the elements of the array is:" << Sum(arr,n) << endl;

}
