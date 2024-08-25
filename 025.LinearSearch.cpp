#include<iostream>
using namespace std;
bool search(int arr[],int size,int key)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]==key)
        {
           return true;
        }
    }
    return false;
}
int main()
{
    int arr[100];
    int size,key;
    cout << "Enter the size of the array:" << endl;
    cin >> size ;
    cout << endl;
    cout << "Enter the elements of the array:" << endl;
    for (int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element you want to search:" << endl;
    cin >> key;
    bool found = search(arr,size,key);
    if(found)
    {
       cout << "Element found" << endl;
    }
    else {
        cout << "Element not found" << endl;
    }
}
