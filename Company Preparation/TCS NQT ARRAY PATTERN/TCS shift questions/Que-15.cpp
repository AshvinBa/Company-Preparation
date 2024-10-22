#include<iostream>
#include<vector>
#include<unordered_map>  // Instead of <bits/stdc++.h>, directly include only the necessary headers
using namespace std;

vector<int>findTheNumber(int n,vector<int>arr)
{
    int digit = n / 3;  // Calculate the threshold for occurrences
    unordered_map<int,int> mp;  // Map to store frequency of each element
    vector<int> vec;  // Vector to store the result

    if(n == 0)
    {
        return {-1};  // If the size is 0, return {-1}
    }

    // Count the frequency of each element in the array
    for(int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    // Check if any element occurs at least 'digit' times
    for(auto s : mp)
    {
        if(s.second >= digit)
        {
            vec.push_back(s.first);  // Add elements that meet the condition
        }
    }

    // If no elements meet the condition, return {-1}
    if(vec.empty())
    {
        return {-1};  
    }

    return vec;
}

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;

    if(n <= 0)
    {
        cout << "Invalid size" << endl;
        return 0;  // Exit if input size is invalid
    }

    vector<int> arr(n);  // Initialize the vector after taking input for size

    cout << "Enter the values: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];  // Input the values
    }
    
    vector<int> res = findTheNumber(n, arr);  // Call the function to find the required numbers

    cout << "The Digits are: ";
    for(int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";  // Print the result
    }

    return 0;
}
