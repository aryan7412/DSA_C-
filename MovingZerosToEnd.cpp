#include <iostream>
#include <climits>
#include <vector>
using namespace std;
vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.
    int i=0;
    for(int j=0; j<n; j++){
        if(a[j]!=0){
            swap(a[i],a[j]);
            i++;
        }
    }
    return a;
}
int main(){
    vector <int> a;
    a.push_back(1);
    a.push_back(0);
    a.push_back(9);
    a.push_back(6);
    a.push_back(0);
    a.push_back(0);
    a.push_back(4);
    a.push_back(2);
    a.push_back(0);
    a.push_back(1);
    int n = a.size();
    cout << "After moving the zeros at the end" << endl;
    a = moveZeros(n,a);
    for(int i=0; i<n; i++){
        cout << a[i];
    }
}
