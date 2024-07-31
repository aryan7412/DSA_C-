#include<iostream>
using namespace std;
int main()
{
    int i;
    int x;
    cout<< "Enter the number to check if the number is prime or not" << endl;
    cin >> x;

    bool isprime = 1;
    for(i=2; i<x; i++)
    {
        if(i%2==0)
        {
            isprime = 0;
        }
    }
    if(isprime==0)
    {
        cout << "Not a prime number" << endl;
    }
    else
    {
        cout << "Prime number" << endl;
    }
}