#include <climits>
#include <iostream>
using namespace std;

int minMultRec(int arr[], int i, int j) {
    if (i + 1 == j)
        return 0;
    int res = INT_MAX;
    for (int k = i + 1; k < j; k++) {
        int curr = minMultRec(arr, i, k)
                  + minMultRec(arr, k, j)
                  + arr[i] * arr[k] * arr[j];
        res = min(curr, res);
    }
    return res;
}
int minMult(int arr[], int n) {
    return minMultRec(arr, 0, n - 1);
}
int main() {
    int arr[] = {1, 2, 3, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << minMult(arr, n);
    return 0;
}
