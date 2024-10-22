#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Entre the Value of N: ";
    cin>>n;
    int totalFemale=0,totalgrade=0;
    string name,gender;
    int age;
    char grade;

    cout<<"Enter the Data: ";
    while(n--)
    {
        cin>>name>>gender>>age>>grade;

        if(age>20)
        {
            cout<<name<<" "<<endl;
        }

        if(gender=="Female")
        {
            totalFemale++;
            totalgrade+=grade;
        }
    }
    double avg = (double) totalgrade/totalFemale;

    cout<<"Average grade: "<<avg;
    return 0;
}
