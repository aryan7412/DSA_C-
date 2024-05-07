#include<iostream>
using namespace std;
int main()
{
    int i = 2;
    int x;
    cout<< "Enter the number to check if the number is prime or not" << endl;
    cin >> x;

    while(i<x)
    {
        if (x%i==0)
        {
            cout << "number is not prime" << endl;
        }
        else
        {
            cout << "number is prime" << endl;
        }
        i++;
    }
}