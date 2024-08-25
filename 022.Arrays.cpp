#include<iostream>
using namespace std;
int main()
{
 int arr1[10]={1,2,3,5,4,6,7,8,9,10};
 for(int i=0; i<sizeof(arr1)/sizeof(int); i++)
 {
     cout << arr1[i] << " ";

 }
  cout << endl;
 int arr2[100];
 int size;
 cout << "Enter the size of the array" << endl;
 cin >> size;
 for(int y=0; y<size; y++)
 {
     cin >> arr2[y] ;
 }
 for(int y=0; y<size; y++)
 {
     cout << arr2[y] << " " ;
 }
}
