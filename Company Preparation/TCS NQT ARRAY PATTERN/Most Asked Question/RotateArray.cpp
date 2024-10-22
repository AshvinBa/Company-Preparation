#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> swapByK(vector<int> arr, int n, int k)
{
    vector<int> temp(n);
    int i = 0;

    while (i < n)
    {
        temp[i] = arr[(i + k) % n];
        i++;
    }
    return temp;
}

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the Element: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "Insert the K value: ";
    cin >> k;
    vector<int> ans = swapByK(arr, n, k);
    cout << "The Array Elements are: ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}