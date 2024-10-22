/*
Arrange the alternate List of Positive and Negative Number.

Input:
arr[] = {3,1,-2,-5,2,-4}
Output: 3,-2,1,-5,2,-4 
       
*/

#include<iostream>
#include<vector>
using namespace std;

void Pos_Neg(vector<int>& arr, int n) {
    vector<int> pos;  // Vector to store positive numbers
    vector<int> neg;  // Vector to store negative numbers

    // Separating positive and negative numbers into respective vectors
    for(int i = 0; i < n; i++) {
        if(arr[i] < 0) {
            neg.push_back(arr[i]);
        } else {
            pos.push_back(arr[i]);
        }
    }

    // Alternating between positive and negative numbers for output
    int i = 0, j = 0;
    int k = 0;
    while(i < pos.size() && j < neg.size()) {
        if(k % 2 == 0) {
            cout << pos[i++] << " ";  // Print positive number
        } else {
            cout << neg[j++] << " ";  // Print negative number
        }
        k++;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the values: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    Pos_Neg(arr, n);
    
    return 0;
}
