#include<iostream>
using namespace std;
int fact(int f)
{
    int facto=1;
    for(int i=1; i<=f; i++)
    {
        facto = facto*i;
    }
    return facto;
}
int nCr(int n,int r)
{
    int num = fact(n);
    int den = fact(r)*fact(n-r);
    return num/den;
}
int main()
{
    int x,n,r;
    cout << "Enter the value of n :" << endl;
    cin >> n ;
    cout << "Enter the value of r :" << endl;
    cin >> r ;
    x = nCr(n,r);
    cout << "value of the combination is: "<< x << endl;
}
