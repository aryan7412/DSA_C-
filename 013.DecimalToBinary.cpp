#include<iostream>
using namespace std;
int main(){
    int i=0;
    int n;
    int ans=0;
    cout << "Enter a number" << endl;
    cin >> n;
    while(n!=0)
    {
        int bit = n&1;
        ans=(bit * pow(10,i)+ans);
        n = n>>1;
        i++;
    }
    cout << "Answer is:" << ans  << endl;
}