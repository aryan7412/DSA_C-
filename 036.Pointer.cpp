#include<iostream>
using namespace std;
int main()
{
    int num = 5;
    cout << "address of the Num:" << &num << endl;
    int *ptr = &num;
    cout << "address :" << ptr << endl;
    cout << "Value :" << *ptr << endl;
    cout << "Size of num: " << sizeof(num) << endl;
    cout << "Size of pointer: " << sizeof(ptr) << endl;


    //New thing
    int *p = 0;
    p = &num;
    cout << *p << endl;
    cout << p << endl;

    //Incrementing a pointer
    int *x = &num;
    cout << "before:" << num << endl;
    (*x)++;
    cout << "after:" << num << endl;

    //Copying Pointer
    int *q = ptr;
    cout << q << endl;
    cout << *q << endl;

}
