/*
Rearrange array in increasing and Decreasing order.

Input:
int arr[] ={ 1,5,6,4,7,9}

Output: {1,4,5,9,7,6}
*/

#include <bits/stdc++.h>
using namespace std;

void IncDec(vector<int> &arr, int n)
{
    sort(arr.begin(), arr.end());

    if (n % 2 == 0)
    {
        int i = n / 2;
        int j = n - 1;
        while (i <= j)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    else
    {
        int i = n / 2 ;
        int j = n - 1;
        while (i <= j)
        {
            swap(arr[i++], arr[j--]);
        }
    }
}

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;
    vector<int> arr(n);

    cout << "Enter the Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    IncDec(arr, n);
    cout << "The Array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}