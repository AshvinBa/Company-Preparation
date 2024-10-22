/*
Matrix Identity Check:

Problem: Write a program to check if two given matrices are identical.

Input:
Matrix A: [[1,1,1,1], [2,2,2,2], [3,3,3,3], [4,4,4,4]]
Matrix B: [[1,1,1,1], [2,2,2,2], [3,3,3,3], [4,4,4,4]]

Output: Matrices are identical

Explanation: The program checks each corresponding element in both 
matrices for equality.
*/

#include <iostream>
#include <vector>
using namespace std;

// Function to check if two matrices are identical
bool checkMatrix(const vector<vector<int>>& mat1, const vector<vector<int>>& mat2, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mat1[i][j] != mat2[i][j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;

    // Initializing two matrices using vectors
    vector<vector<int>> mat1(n, vector<int>(n));
    vector<vector<int>> mat2(n, vector<int>(n));

    // Input for the first matrix
    cout << "Enter the elements of Matrix 1: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat1[i][j];
        }
    }

    // Input for the second matrix
    cout << "Enter the elements of Matrix 2: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat2[i][j];
        }
    }

    // Check if matrices are identical
    if (checkMatrix(mat1, mat2, n)) {
        cout << "Matrices are identical." << endl;
    } else {
        cout << "There is a difference between the matrices." << endl;
    }

    return 0;
}
