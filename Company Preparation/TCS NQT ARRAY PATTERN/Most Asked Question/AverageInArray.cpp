/*
Average of the two number in the array.

arr[] = {2 4 6 8}
Op = 2
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int AverageInArray(vector<int> &vec, int n)
{
    int sum = 0;
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[vec[i]]++;
    }

    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++)
        {
            if (mp.find((vec[i] + vec[j]) / 2) != mp.end()) 
                sum++;
        }
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;

    vector<int> vec(n);

    cout << "Enter the Elements: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> vec[i];
    }

    int result = AverageInArray(vec, n);
    cout << "The result is: " << result << endl;

    return 0;
}
