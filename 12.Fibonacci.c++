#include<iostream>
using namespace std;
int main()
{
    int n,a,i,b,nextnumber;
    cout << "Enter the number of terms for fibonacci series" << endl;
    cin >> n ;
    a = 0;
    b = 1;
    cout << a << endl << b << endl;
    for (i=1; i<n-1; i++)
    {
        nextnumber = a + b;
        cout << nextnumber << " " << endl;

        a = b;
        b = nextnumber;
    }
}