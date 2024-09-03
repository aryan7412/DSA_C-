#include<iostream>
using namespace std;
void printArray(int arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
}
void sort01(int arr[],int size)
{
    int left = 0,right = size-1;
    while(left<right)
    {
        while(arr[left] == 0 && left<right)
        {
            left++;
        }
        while(arr[right] == 1 && left<right)
        {
            right--;
        }
        if(left<right)
        {
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }

}
int main()
{
    int arr[6] = {0,1,1,0,1,0};
    int size = 6;
    sort01(arr,size);
    printArray(arr,size);
    return 0;
}
