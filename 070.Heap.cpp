#include<iostream>
using namespace std;

class heap
{
    public:
    int arr[100];
    int size;
    heap()
    {
        arr[0]=-1;
        size = 0;
    }
    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;
        while(index > 1)
        {
            int parent = index / 2;
            if(arr[parent] < arr[index])
            {
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }
    void print()
    {
        for(int i=1; i<=size; i++)
        {
            cout << arr[i] << ' ';
        }
        cout << endl;
    }
    void deleteheap()
    {
        if(size == 0)
        {
            cout << "Nothing to delete" << endl;
        }
        arr[1] = arr[size];
        size --;
        int i = 1;
        while(i<size)
        {
            int leftindex = 2*i;
            int rightindex = 2*i +1;
            if(leftindex<size && arr[leftindex]>arr[i])
            {
                swap(arr[leftindex],arr[i]);
            }
            else if(rightindex<size && arr[rightindex]>arr[i])
            {
                swap(arr[rightindex],arr[i]);
            }
            else{
                return;
            }
        }
    }
};
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2*i;
    int right = 2*i + 1;

    if(left <= n  &&  arr[left] > arr[largest])
    {
        largest = left;
    }
    if(right <= n  &&  arr[right] > arr[largest])
    {
        largest = right;
    }
    if(largest != i)
    {
        swap(arr[largest],arr[i]);
        heapify(arr,n,i);
    }
}
void heapsort(int arr[],int n)
{
    int size = n;
    while(size > 1)
    {
        swap(arr[size],arr[1]);
        size--;
        heapify(arr, size, 1);
    }
}
int main()
{
    heap h;
    h.insert(50);
    h.insert(60);
    h.insert(70);
    h.insert(10);
    h.insert(30);
    h.insert(90);
    h.deleteheap();
    h.print();

    int arr[6] = {-1,54,53,55,52,50};
    int n = 5;
    for(int i=n/2; i>0; i--)
    {
        heapify(arr, n, i);
    }
    for(int i= 1; i<=n; i++)
    {
        cout<< arr[i] << ' ';
    }
    cout << endl;

    heapsort(arr, n);
    for(int i= 1; i<=n; i++)
    {
        cout<< arr[i] << ' ';
    }
    cout << endl;

    return 0;
}
