#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int> rotateArray(vector<int>& arr, int n) {
    // Rotate the array to the left by one position
    int temp = arr[0];
    for(int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
    return arr;
}

int main() {
    // Initialize the vector manually instead of using an initializer list
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);

    int n = arr.size();

    // Output the original array
    cout << "Original array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Rotate the array
    arr = rotateArray(arr, n);

    // Output the rotated array
    cout << "Array after rotation: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
