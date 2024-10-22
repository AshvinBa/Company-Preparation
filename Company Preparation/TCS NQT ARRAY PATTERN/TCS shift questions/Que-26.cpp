// Find the subarray with largest sum , and return the sum.
/*
Example - 1)
nums : -2 1 -3 4 -1 2 1 -5 4
output : 6
Expplaination: The subarray [4 -1 2 1] has the largest sum. 
*/
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
int SubarrayWithSum(vector<int>arr,int n)
{
    int maxSum = nums[0];
    int currentSum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        currentSum += nums[i];
        if (currentSum > maxSum) {
            maxSum = max(currentSum, maxSum);
        }
        if (currentSum < 0) {
            currentSum = 0;
        }
    }
    cout << maxSum << endl;
    return 0;
}
/*

int SubarrayWithSum(vector<int> arr,int n)
{


    int maxSum=arr[0];
    int currentSum=0;

    for(int i=0;i<n;i++)
    {
        currentSum+=arr[i];

        if(currentSum > maxSum)
        {
            maxSum = max(maxSum,currentSum);
        }

        if(currentSum < 0)
        {
            currentSum = 0;
        }
    }
    return maxSum;
}

int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the Elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The Largest sum is: "<<SubarrayWithSum(arr,n);
}*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {
    string input;
    cout<<"Enter the Element: ";
    getline(cin, input);
    stringstream ss(input);
    vector<int> nums;
    int num;
    while (ss >> num) {
        nums.push_back(num);
    }
    
    int maxSum = nums[0];
    int currentSum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        currentSum += nums[i];
        if (currentSum > maxSum) {
            maxSum = max(currentSum, maxSum);
        }
        if (currentSum < 0) {
            currentSum = 0;
        }
    }
    cout << maxSum << endl;
    return 0;
}