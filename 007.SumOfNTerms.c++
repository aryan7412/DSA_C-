#include<iostream>
using namespace std;
int main()
{
    float i,x,sum=0;

    cout << "Enter the values of staring point and ending point:" << endl;
    cin >> i >> x;

    cout << "The sum of N terms is:" << endl;

    while(i<=x)
    {
        sum = sum + i;
        i++;
    }
    cout << sum << endl;
}