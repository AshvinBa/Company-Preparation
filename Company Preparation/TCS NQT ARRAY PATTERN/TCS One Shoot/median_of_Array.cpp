/*
Median Of The Array.

Input: 
arr[] = {2,5,1,7}

Output: 3.5

*/

#include<bits/stdc++.h>
using namespace std;

double MedianOfArray(vector<int>arr,int n)
{
    sort(arr.begin(),arr.end());
    
    if( n % 2 == 0)
    {
        return (arr[ n/2 - 1] + arr[n/2]) / 2.0;        
    }
    else
    {
        return arr[n/2];;
    }

}

int main()
{
    int n;
    cout<<"Enter the size: ";
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter the Elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"The Median Of THe Array: "<<MedianOfArray(arr,n);
    return 0;
}