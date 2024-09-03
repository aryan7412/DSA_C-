#include<iostream>
using namespace std;
int firstocc(int arr[], int size, int n) {
    int s = 0, e = size - 1, first = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == n) {
            first = mid;
            e = mid - 1;
        } else if (arr[mid] < n) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return first;
}

int lastocc(int arr[], int size, int n) {
    int s = 0, e = size - 1, second = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == n) {
            second = mid;
            s = mid + 1;
        } else if (arr[mid] < n) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return second;
}
int main()
{
    int n,arr[100],size,first,second,ans;
    cout << "enter the size of the array:" << endl;
    cin >> size;
    cout << "enter the array:" << endl;
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the number to find no. of total occurance:" << endl;
    cin >> n;
    first = firstocc(arr,size,n);
    second = lastocc(arr,size,n);
    ans = (second - first) + 1;
    cout << "Total number of occurance:" << ans << endl;
}
