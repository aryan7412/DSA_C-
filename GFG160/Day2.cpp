#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr; // Create an empty vector
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(0);
    arr.push_back(3);
    arr.push_back(0);
    arr.push_back(4);
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            // Move the zero to the end of the array
            arr.erase(arr.begin() + i);  // Remove the zero at index i
            arr.push_back(0);            // Append zero to the end
            i--;                         // Adjust index after modification
            n--;                         // Reduce the iteration limit
        }
    }

    // Print the array to check result
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " "; // Print array elements
    }

    return 0;
}
/*  int n = arr.size();
    int nonZeroIndex = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[nonZeroIndex] = arr[i];
            nonZeroIndex++;
        }
    }
    for (int i = nonZeroIndex; i < n; i++) {
        arr[i] = 0;
        }*/
