#include<bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>>& matrix) {
       
        for(int i=0;i< matrix.size();i++)
        {
            for(int j= i+1;j< matrix.size();j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
int main(){
    vector<vector<int>> matrix ={{1,2,3},{4,5,6},{7,8,9}};

    for (int i = 0; i < matrix.size(); i++)
    {
        cout<<endl;
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cout<<" "<<matrix[i][j];
        }
        
    }
    rotate(matrix);
    cout<<endl;
    for (int i = 0; i < matrix.size(); i++)
    {
        cout<<endl;
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cout<<" "<<matrix[i][j];
        }
        
    }
    return 0;
}