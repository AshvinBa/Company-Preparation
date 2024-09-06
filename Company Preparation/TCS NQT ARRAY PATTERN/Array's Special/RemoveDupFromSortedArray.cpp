#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void solve(vector<int> &arr, int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    // Printing the array elements up to i+1
    for (int k = 0; k <= i; k++)
    {
        cout << arr[k] << " ";
    }
    cout << endl;
}


int main()
{
    int n;
    cout << "Entre the size of the array: ";
    cin >> n;
    vector<int>arr(n);
    cout << "Enter the elemnts of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    solve(arr, n);
    return 0;
}