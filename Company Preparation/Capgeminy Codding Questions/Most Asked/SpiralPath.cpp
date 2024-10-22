/*
Spiral Path.

Example 1)
Input:
arr[]=
{
1   2   3   4
5   6   7   8
9   10  11  12
13  14  15  16
}

Output:

1   2   3   4
12  13  14  5
11  16  15  6
10  9   8   7
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> SpiralPath(vector<vector<int>> arr, int n)
{
    int left = 0, top = 0;
    int right = n - 1, down = n - 1;
    int direction = 0;
    vector<int> spiral;

    while (left <= right && top <= down)
    {
        if (direction == 0) // Move left to right
        {
            for (int i = left; i <= right; i++)
            {
                spiral.push_back(arr[top][i]);
            }
            top++;
        }
        else if (direction == 1) // Move top to bottom
        {
            for (int i = top; i <= down; i++)
            {
                spiral.push_back(arr[i][right]);
            }
            right--;
        }
        else if (direction == 2) // Move right to left
        {
            for (int i = right; i >= left; i--)
            {
                spiral.push_back(arr[down][i]);
            }
            down--;
        }
        else if (direction == 3) // Move bottom to top
        {
            for (int i = down; i >= top; i--)
            {
                spiral.push_back(arr[i][left]);
            }
            left++;
        }
        direction = (direction + 1) % 4;
    }
    return spiral;
}

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));

    cout << "Enter the values: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    vector<int> result = SpiralPath(arr, n);

    cout << "Spiral path: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
