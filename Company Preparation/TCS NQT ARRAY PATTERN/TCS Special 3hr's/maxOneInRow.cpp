#include<iostream>
#include<vector>

using namespace std;

int maxOneRow(vector<vector<int>> mat, int row, int col)
{
    int index=-1;
    int cnt=0;  
    int maxi=-1;
    for(int i=0;i<row;i++)
    {
        cnt=0;
        for(int j=0;j<col;j++)
        {
            if(mat[i][j]==1)
            {
                cnt++;
            }
        }
        if(cnt!=0 && maxi<cnt)
        {
            index=i;
            maxi=cnt;
        }        
    }
    return index;
}

int main()
{
    int row, col;
    cout << "Enter the number of Rows and Columns: ";
    cin >> row >> col;

    vector<vector<int>> mat(row, vector<int>(col)); 

    cout << "Enter the Elements of the array: ";
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin >> mat[i][j];
        }
    }
    int ansRow = maxOneRow(mat, row, col);
    cout<<"\nThe Row of Maximum Ones is: "<<ansRow<<endl;

    return 0;
}
