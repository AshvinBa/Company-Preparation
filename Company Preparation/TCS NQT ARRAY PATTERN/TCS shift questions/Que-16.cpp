#include <iostream>
#include <vector>

using namespace std;

// vector<char> sortBySwap(vector<char>& arr, int N) {
//     int left = 0;
//     int mid = 0;
//     int right = N - 1;
//     while (mid <= right) 
//     {
//         if (arr[mid] == '3') 
//         {
//             swap(arr[left], arr[mid]);
//             left++;
//             mid++;
//         } 
//         else if (arr[mid] == '6') 
//         {
//             mid++;
//         } 
//         else if (arr[mid] == '7') 
//         {
//             swap(arr[right], arr[mid]);
//             right--;
//         }
//     }
//     return arr;
// }

// int main() {
//     cout << "\nEnter space-separated elements: ";
//     vector<char> arr;
//     char c;
//     while (cin >> c) {
//         arr.push_back(c);
//     }
//     arr = sortBySwap(arr, arr.size());
//     for (char c : arr) {
//         cout << c << " ";
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

// Sorts the array with a 3-way partition approach, like the Dutch National Flag problem
vector<char> sortBySwap(vector<char>& arr, int N) {
    int left = 0;
    int mid = 0;
    int right = N - 1;

    // Loop to partition the array based on the characters '3', '6', and '7'
    while (mid <= right) 
    {
        if (arr[mid] == '3') 
        {
            swap(arr[left], arr[mid]);  // Move '3' to the left side
            left++;
            mid++;
        } 
        else if (arr[mid] == '6') 
        {
            mid++;  // '6' stays in the middle
        } 
        else if (arr[mid] == '7') 
        {
            swap(arr[right], arr[mid]);  // Move '7' to the right side
            right--;
        }
    }
    return arr;
}

int main() {
    vector<char> arr;
    char c;
    string input;
    
    cout << "\nEnter space-separated elements (3, 6, 7 only): ";
    getline(cin, input);  // Get the entire line of input
    
    for (char ch : input) {
        if (ch != ' ' && (ch == '3' || ch == '6' || ch == '7')) {
            arr.push_back(ch);  // Only push valid characters ('3', '6', '7')
        }
    }
    
    if (arr.empty()) {
        cout << "No valid input provided!" << endl;
        return 0;  // Exit if no valid input
    }

    arr = sortBySwap(arr, arr.size());  // Sort the array based on the characters
    
    cout << "Sorted elements: ";
    for (char c : arr) {
        cout << c << " ";  // Print sorted array
    }
    cout << endl;

    return 0;
}
