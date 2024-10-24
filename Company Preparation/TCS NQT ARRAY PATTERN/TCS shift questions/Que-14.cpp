/*
Find the pair of the shoes.
Ex-1)
Input: 4L 5L 6R 4R 5R
Output: 2
*/

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    int N;
    cout<<"Enter the size: ";
    cin >> N;

    unordered_map<string, int> store;

    cout<<"Entre the values: ";
    for (int i = 0; i < N; ++i) {
        string shoeSize;
        cin >> shoeSize;
        if (store.find(shoeSize) != store.end()) {
            store[shoeSize]++;
        } else {
            store[shoeSize] = 1;
        }
    }

    int pairs = 0;
    for (auto& it : store) {
        string key = it.first;
        int val = it.second;
        string opposite;
        if (key[key.size() - 1] == 'L') {
            opposite = key.substr(0, key.size() - 1) + 'R';
        } else {
            opposite = key.substr(0, key.size() - 1) + 'L';
        }
        if (store.find(opposite) != store.end()) {
            pairs += min(val, store[opposite]);
        }
    }

    cout << pairs / 2 << endl; 

    return 0;
}