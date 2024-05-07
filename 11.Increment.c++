#include<iostream>
using namespace std;
int main()
{
    int i = 5,j = 5;
    int a,b;
    a = i++;
    b = ++j;
    cout << a <<endl;
    cout << i <<endl;
    cout << b <<endl;
    cout << j <<endl;

    int k = 5,l = 5;
    int x,y;
    x = k--;
    y = --l;
    cout << x <<endl;
    cout << k <<endl;
    cout << y <<endl;
    cout << l <<endl;
}