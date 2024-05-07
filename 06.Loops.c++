#include<iostream>
using namespace std;
int main()
{   
    /*IF CONDITION*/

    cout << "enter the number" << endl;
    int n;
    cin >> n;

    if (n > 0)
    {
        cout << "n is positive" << endl;
    }

    else
    {
        cout << " n is negative" << endl;
    
    }
    int a,b;
    cout << "Enter the values of a and b" << endl;
    cin >> a >> b;
    if (a>b)
    {
        cout << "A is greater than B" << endl;
    }
    if(b>a)
    {
        cout << "B is greater than A" << endl;
    }
    else
    {
        cout<< "They both are equal" << endl;
    }




    /*WHILE LOOP*/

    cout << "enter the number of terms you want to print" << endl;
    int x;
    cin >> x;
    int i=1;
    while (i<=x)
    {
        cout << i << " ";
        i++;
    }

    /*FOR LOOP*/

    cout << "Enter the number of terms you want to print" << endl;
    

}