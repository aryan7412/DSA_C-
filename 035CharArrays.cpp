#include<iostream>
using namespace std;
void reverse(char name[20],int n)
{
    int s = 0;
    int e = n-1;
    if(s<e)
    {
        swap(name[s++],name[e--]);
    }
}
int getLength(char name[20])
{
    int count = 0;
    for(int i=0; name[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
char name[20];
cout << "Enter your name:" << endl;
cin >> name;

cout << "Your Name is:  " << name << endl;

int len = getLength(name)
cout << "Total elements: " << len;

cout << "reverse:" << reverse(name,  )

cout << "Your Name is:  " << name << endl;
return 0;
}
