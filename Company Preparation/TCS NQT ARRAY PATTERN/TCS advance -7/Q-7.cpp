/*
Search element in the matrix , where the row are sorted in increasing order.
*/

#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size: ";
    int n;
    cin>>n;
    int mat[n][n];
    cout<<"Enter the values: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
    }

    int target;
    cout<<"Enter the target: "<<endl;
    cin>>target;

    int i=0;
    int j=n-1;
    bool found;

    while(j>=0 && i<n)
    {
        if(mat[i][j]==target)
        {
            cout<<i<<" "<<j<<endl;
            found=true;
            break;
        }
        else if(mat[i][j]>target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    if(!found)
    {
        cout<<"No, The Target is available."<<endl;
    }
    return 0;
}