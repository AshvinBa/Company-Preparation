#include <iostream>
#include <vector>
#include <deque>
using namespace std;

vector<int> maxNumberInSubArray(int arr[], int n, int k) {
    vector<int> ans; // To store the result
    deque<int> dq; // To store indices of array elements

    // Traverse through the array
    for (int i = 0; i < n; ++i) {
        // Remove elements that are out of this window
        if (!dq.empty() && dq.front() == i - k) {
            dq.pop_front();
        }

        // Remove elements from the back of the deque that are smaller than the current element
        while (!dq.empty() && arr[dq.back()] <= arr[i]) {
            dq.pop_back();
        }

        // Add the current element at the back of the deque
        dq.push_back(i);

        // Start adding results to ans once we have at least k elements in the window
        if (i >= k - 1) {
            ans.push_back(arr[dq.front()]);
        }
    }

    return ans;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;

    cout << "Enter the value of K: ";
    cin >> k;

    // Ensure k is a valid value
    if (k > n || k <= 0) {
        cout << "Invalid window size!";
        return 0;
    }

    vector<int> result = maxNumberInSubArray(arr, n, k);

    // Output the result
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}


/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


vector<int> maxNumberInSubArray(int arr[], int n, int k) {
    vector<int> ans;

    // If the window size is larger than the array size, return an empty vector
    if (k > n) {
        return ans;
    }

    int i = 0;
    int j = k;

    // Sliding window approach
    while (j <= n) {
        int maxi = 0;
        for (int x = i; x < j; x++) {
            maxi = max(maxi, arr[x]);  // Find maximum in the current window
        }
        ans.push_back(maxi);  // Store the maximum value
        i++;
        j++;
    }
    return ans;            
}


int main()
{ 
    int arr[]={100,200,300,400,500,600,700,800,900};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"Enter the value of K: ";
    cin>>k;
    vector<int>result=maxNumberInSubArray(arr,n,k);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}
*/