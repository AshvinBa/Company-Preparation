/*
Factors of the number.
Example 1)

Input: 54
Output: 1 2 3 6 9 18 27
*/

/*
Optimised Solution.

#include<iostream>
#include<vector>
using namespace std;

vector<int> factors(int n) {
    vector<int> ans;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            ans.push_back(i);
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    
    vector<int> ans = factors(n);
    
    cout << "The Factors of the Number: ";
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    
    return 0;
}
*/

#include<iostream>
#include<vector>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

vector<int> factors(int n) {
    vector<int> ans;
    for(int i = 1; i <= sqrt(n); i++) {
        if(n % i == 0) {
            ans.push_back(i);
            if(i != n / i) { // Avoid adding the square root twice if n is a perfect square
                ans.push_back(n / i);
            }
        }
    }
    sort(ans.begin(), ans.end()); // To keep factors in increasing order
    return ans;
}

int main() {
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    
    vector<int> ans = factors(n);
    
    cout << "The Factors of the Number: ";
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    
    return 0;
}
