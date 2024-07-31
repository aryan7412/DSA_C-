#include<iostream>
using namespace std;
int main()
{
    int a,b;
    /*We cant take float as % is not valid for that*/
    char op;
    cout << "Enter the two Numbers:" << endl;
    cin >> a >> b;
    cout << "Enter the operation:" << endl;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << (a+b) << endl;
        break;
    case '-':
        cout << (a-b) << endl;
        break;
    case '*':
        cout << (a*b) << endl;
        break;
    case '/':
        cout << (a/b) << endl;
        break;
    case '%':
        cout << (a%b) << endl;
        break;
    default:
        cout << "Invalid Operation" << endl;
        break;
    }
}