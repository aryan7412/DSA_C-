/*Bitwise Operator*/
/* & | ~ ^ */
/*DEC mai jo padhaya tha tables*/
/*left shift <<       rs >>*/

#include<iostream>
using namespace std;
int main()
{
    int a = 4;
    int b = 6;

    cout << "a and b is :" << (a&b) << endl;
    cout << "a or b is :" << (a|b) << endl;
    cout << "a xor b is :" << (a^b) << endl;
    cout << "~a is :" << ~a << endl;

    cout << (17>>1) << endl; /*    17/2    */
    cout << (17>>2) << endl; /*   17/2*2   */
    cout << (19<<1) << endl; /*   19*2     */
    cout << (19<<2) << endl;/*    19*2*2   */
}