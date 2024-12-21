#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateMatrixAntiClockwise(vector<vector<int>>& mat) {
    int n = mat.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(mat[i][j], mat[j][i]);
        }
    }
    for (int j = 0; j < n; j++) {
        int top = 0, bottom = n - 1;
        while (top < bottom) {
            swap(mat[top][j], mat[bottom][j]);
            top++;
            bottom--;
        }
    }
}
void printMatrix(const vector<vector<int>>& mat) {
    for (const auto& row : mat) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Original Matrix:" << endl;
    printMatrix(mat);

    rotateMatrixAntiClockwise(mat);

    cout << "\nMatrix after 90-degree anti-clockwise rotation:" << endl;
    printMatrix(mat);

    return 0;
}
