#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
//My Approach.

void count_word_frequency(const string &input_string)
{
    stringstream ss(input_string);
    string word;
    
    map<string, int> frequency;

    while(ss >> word)
    {
        frequency[word]++;

    }
    for(auto pair:frequency)
    {
        cout<<pair.first <<" "<<pair.second<<endl;
    }
}
*/

void count_word_frequency(const string &input_string)
{
    stringstream ss(input_string);
    string word;
    
    map<string, int> frequency;
    while(ss >> word)
    {
        bool is_alpha = true;

        for(char c: word)
        {
            if(!isalpha(c))
            {
                is_alpha = false;
                break;
            }
        }
        if(is_alpha)
            frequency[word]++;
    }
    cout<<"The Pairs of the Fruits are: "<<endl;
    for(auto pair : frequency)
    {
        cout<<pair.first <<" : "<<pair.second<<endl;
    }

}


int main()
{
    string input_string;
    cout<<"Enter the string: ";
    getline(cin , input_string);
    count_word_frequency(input_string);
    return 0;
}











