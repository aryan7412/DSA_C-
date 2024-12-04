#include<iostream>
using namespace std;
int main(){
    int arr[10]={2,5,6};
    cout << "Address of first memory block is: " << arr << endl;
    cout << arr[0] << endl;
    cout << "Address of first memory block is: " << &arr[0] << endl;
    cout << "Value of 0th memory block is: " << *arr << endl;
    cout << "Value of 1st memory block is: " << *(arr+1) << endl;
    return 0;
}
