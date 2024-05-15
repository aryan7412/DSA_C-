#include<iostream>
using namespace std;
int EvenOdd(int n)
{
    if(n%2==0)
    {
        return 1;
    }
    else
    {
         return 0;
    }
}
int main()
{
    int n,x;
    cout << "Enter the number:" << endl;
    cin >> n ;
    x = EvenOdd(n);
    if(x==1)
    {
        cout << "Even number" << endl;
    }
    else
    {
        cout << "Odd number" << endl;
    }
}