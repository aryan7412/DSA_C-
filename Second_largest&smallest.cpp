#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a) {
    int s_small = INT_MAX;
    int small = INT_MAX;
    int s_large = INT_MIN;
    int large = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (large < a[i]) {
            s_large = large;
            large = a[i];
        } else if (s_large < a[i]) {
            s_large = a[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (small > a[i]) {
            s_small = small;
            small = a[i];
        } else if (s_small > a[i]) {
            s_small = a[i];
        }
    }

    vector<int> result;
    result.push_back(s_large);
    result.push_back(s_small);

    return result;
}


int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n < 2) {
        cout << "Array must have at least 2 elements!" << endl;
        return 0;
    }

    vector<int> a(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> result = getSecondOrderElements(n, a);

    if (result.empty()) {
        cout << "Not enough unique elements for second largest or smallest." << endl;
    } else {
        cout << "Second Largest: " << result[0] << endl;
        cout << "Second Smallest: " << result[1] << endl;
    }

    return 0;
}
