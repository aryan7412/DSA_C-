#include<iostream>
using namespace std;
int main()
{
    int m,h,f,t,o;
    cout << "Enter the amount:" << endl;
    cin >> m;
    switch (1)
    {
    case 1:
        if(m>=100)
        {
            h=m/100;
            m=m%100;
        }
        else{
            h=0;
        }
        cout << "Number of hundred ruppes required:" << h <<endl;
    case 2:
        if(m>=50)
        {
            f=m/50;
            m=m%50;
        }
        else{
            f=0;
        }
        cout << "Number of fifty ruppes required:" << f <<endl;
    case 3:
        if(m>=20)
        {
            t=m/20;
            m=m%20;
        }
        else
        {
            t=0;
        }
        cout << "Number of twenty ruppes required:" << t <<endl;
    case 4:
        if(m>=1)
        {
            o=m/1;
            m=m%1;
        }
        else{
            o=0;
        }
        cout << "Number of one ruppe required:" << o <<endl;
        break;
    }
}
