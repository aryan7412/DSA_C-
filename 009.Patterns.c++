#include<iostream>
using namespace std;
int main()
{
    int i,j,n,k;
    cout << "Enter the numbr of rows:" <<endl;
    cin >> n;
    int row =1;

    while(row<=n)
    {
        int space = n - row;
        while(space)
        {
            cout << " ";
            space--;
        }
        int j=1;
        while(j <= row)
        {
            cout << j;
            j++;
        }
        int start = row-1;
        while(start)
        {
            cout << start;
            start--;
        }
        cout<< endl;
        row++;
    }
}
