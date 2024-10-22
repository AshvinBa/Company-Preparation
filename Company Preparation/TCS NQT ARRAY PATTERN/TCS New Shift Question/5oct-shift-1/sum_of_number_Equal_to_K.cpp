/*
Check Wheather that the pair of i<j , num[i]-num[j]==k.

Input : 1 2 2 1
Output : 4
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

unordered_map<int,int> buildFrequencyMap(vector<int> &arr)
{
    unordered_map<int,int>store;

    for(auto num : arr)
    {
        store[num]++;
    }
    return store;
}

int countPairWithDifference( const vector<int>&arr,int k, const unordered_map<int,int>& store)
{
    int ans=0;
    for(int num : arr)
    {
        if(store.find(num + k) != store.end())
        {
            ans += store.at(num + k);  /* It stores the frequency of the digit and add the frequency in answer.
                                        1 : 2 =>  ans+=2  */
        }
    }
    return ans;
}

int  main()
{
    vector<int>arr;
    string line;
    cout<<"Enter the values: "<<endl;
    getline(cin,line);
    stringstream ss(line);
    int ele;

    while(ss >> ele)
    {
        arr.push_back(ele);
    }

    int k = arr.back();
    arr.pop_back();

    unordered_map<int,int>store = buildFrequencyMap(arr);
    int result = countPairWithDifference(arr,k,store);

    cout<<"The sum of the Number is: "<<result<<endl;

    return 0; 
}