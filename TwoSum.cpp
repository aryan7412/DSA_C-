#include <iostream>
#include <vector>
using namespace std;

string read(int n, vector<int> book, int target) {
    int left = 0;
    int right = n - 1;
    int sum = 0;
    sort(book.begin(),book.end());
    while (left < right) {
        sum = book[left] + book[right];
        if (sum == target) {
            return "YES";
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    return "NO";
}

int main() {
    vector<int> book;
    book.push_back(1);
    book.push_back(2);
    book.push_back(3);
    book.push_back(4);
    book.push_back(5);

    int target = 6;
    cout << read(book.size(), book, target) << endl;

    target = 10;
    cout << read(book.size(), book, target) << endl;

    return 0;
}
