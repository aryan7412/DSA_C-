#include<iostream>
using namespace std;
int checkprime(int n)
{
    for(int i = 2; i<n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,x;
    cout << "Enter a number to check prime or not:" << endl;
    cin >> n ;

    x=checkprime(n);
    if(x==1)
    {
        cout<<"Number is prime" <<endl;
    }
    else
    {
        cout<<"Number is not prime" <<endl;
    }
}