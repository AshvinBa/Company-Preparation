/*
Given the arra return true if the number is Armstrong otherwise return false .

Input:
[153 371 108]
Output:
153 371
*/


#include<iostream>
#include<vector>
#include<cmath> 

using namespace std;

bool isArmstrong(int digit) {
    int temp = digit;
    int num = digit;
    int cnt = 0;

    while (digit != 0) {
        cnt++;
        digit /= 10;
    }

    int num2 = 0;

    while (temp != 0) {
        int d = temp % 10;
        num2 += pow(d, cnt);
        temp /= 10;
    }

    return num2 == num;
}

vector<int> Armstrong(int arr[], int n) {
    vector<int> ret;

    for (int i = 0; i < n; i++) {
        if (isArmstrong(arr[i])) {
            ret.push_back(arr[i]);
        }
    }

    if (ret.empty()) {
        return {-1};
    }

    return ret;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter the values: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> ans = Armstrong(arr, n);

    if (ans[0] == -1) {
        cout << "No Armstrong numbers found.";
    } else {
        cout << "Armstrong numbers: ";
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
    }

    return 0;
}
