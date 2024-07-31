#include<iostream>
using namespace std;
int power(int num1,int num2)
{
    int ans=1;
    int i;
    for(i=1; i<=num2; i++)
    {
        ans = ans * num1;
    }
    return ans;
}
int main()
{
    int num1,num2,x;
    cout<< "Enter the number:" <<endl;
    cin >> num1;
    cout<< "Enter the power:" <<endl;   
    cin >> num2;
    x = power(num1,num2);
    cout << "Power of the number is:" << x << endl;
}