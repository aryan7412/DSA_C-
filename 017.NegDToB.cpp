#include<iostream>
using namespace std;
int main()
{
    int n,x,ans=0,i=0;
    cout << "Enter the Negative number:" << endl;
    cin >> n;
    x=(~n)+1;
    while(x!=0)
    {
        int bit = x&1;
        ans=(bit * pow(10,i)+ans);
        x = x>>1;
        i++;
    }
    cout << "Answer is:" << ans  << endl;
}