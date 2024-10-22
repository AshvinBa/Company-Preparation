// Binary Search.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int SearchInBinarySearch(int arr[], int n, int k)
{
    int low = 0, high = n - 1;
    int mid = (low + high) / 2;

    while (low <= high)
    {
        if (k == arr[mid])
        {
            return mid;
        }
        else if (k < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
        mid = (low + high) / 2;
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;

    int arr[n];

    cout << "Enter the values: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the values: ";
    cin >> k;

    cout << "The Index at which difit is found is: " << SearchInBinarySearch(arr, n, k);

    return 0;
}
