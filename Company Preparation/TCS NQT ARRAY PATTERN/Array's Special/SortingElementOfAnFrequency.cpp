/*
Sorting Elements of an Array by Frequency
Given an array of integers arr, sort the array according to the frequency of elements, i.e. elements that have higher frequency comes first. If the frequencies of two elements are the same, then the smaller number comes first.

Examples :
Input: arr[] = [5, 5, 4, 6, 4]
Output: [4, 4, 5, 5, 6]
Explanation: The highest frequency here is 2. Both 5 and 4 have that frequency. Now since the frequencies are the same the smaller element comes first. So 4 4 comes first then comes 5 5. Finally comes 6. The output is 4 4 5 5 6.

Input: arr[] = [9, 9, 9, 2, 5]
Output: [9, 9, 9, 2, 5]
Explanation: The highest frequency here is 3. Element 9 has the highest frequency So 9 9 9 comes first. Now both 2 and 5 have the same frequency. So we print smaller elements first. The output is 9 9 9 2 5.

Expected Time Complexity: O(n*logn)
Expected Space Complexity: O(n)

Constraints:
1 ≤ arr.size() ≤ 105
1 ≤ arr[i]≤ 105

*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    
    static bool condition(pair<int,int>&p1 , pair<int,int>&p2)
    {
        return (p1.second == p2.second)? p1.first<p2.first : p1.second > p2.second;
    }
    
    vector<int> sortByFreq(vector<int>& arr) {
       map<int,int>mp;
       
       for(int i=0;i<arr.size();i++) mp[arr[i]]++;
       
       vector<pair<int,int>>p(mp.begin(),mp.end());
       
       sort(p.begin(),p.end(),condition);
       vector<int>ans;
       
       for(pair<int,int>&temp : p)
       {
           while(temp.second--) ans.push_back(temp.first);
       }
       return ans;
    }
};

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(arr);
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}