#include<iostream>
#include <vector>
using namespace std;
bool checkregion(int i, int j,vector<vector<char>> arr) 
{
    int rows = 2;
    int cols = arr[0].size();
    if (i < 0 || i >= rows || j < 0 || j >= cols || arr[i][j] != '.') 
    {
        return false;
    }
    bool hasBottomNeighbor;
    bool hasTopNeighbor; 
    if(i==1)
    hasTopNeighbor = arr[0][j] == '.';
    if(i==0)
    hasBottomNeighbor = arr[1][j] == '.';
    bool hasLeftNeighbor = (j > 0 && arr[i][j-1] == '.');
    bool hasRightNeighbor = (j < cols && arr[i][j+1] == '.');
   if (j > 0 && j < cols - 1) {
    if (i == 0 && (arr[1][j-1] == '.' || arr[1][j+1] == '.')) {
       return false;
    }
    if (i == 1 && (arr[0][j-1] == '.' || arr[0][j+1] == '.')) {
        return false;
    }
}

    return (hasLeftNeighbor && hasRightNeighbor&&(i==1? hasTopNeighbor : hasBottomNeighbor));
}

int main ()
{
    int num_of_cases;
    vector<int> ans;
    cin>>num_of_cases;
    for(int i=0;i<num_of_cases;i++)
    {
        int col;
        int count=0;
        cin>>col;
        vector<vector<char>> arr(2, vector<char>(col));
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<col;j++)
            {
                // arr[i].push_back('1')
                cin>>arr[i][j];
            }
        }
        for(int j=0;j<col;j++)
        {
            bool check=checkregion(0,j,arr);
            if(check)
            {
                count++;
            }
            check=checkregion(1,j,arr);
            if(check)
            {
                count++;
            }


        }
        ans.push_back(count);
        // cout<<count<<endl;
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
}


// Problem NotSolved Success 