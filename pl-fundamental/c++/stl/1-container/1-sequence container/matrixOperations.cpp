#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    vector<vector<int>> matrix = {
        {0, 1, 1, 0},
        {0, 0, 1, 0},
        {1, 0, 0, 1},
        {0, 0, 0, 1}};

    int numRows = matrix.size();
    int numColums = matrix[0].size();
    unordered_map<int, vector<int>> adjList;
    for (int row = 0; row < numRows; row++)
    {
        for (int col = 0; col < numColums; col++)
        {
            if (matrix[row][col] == 1)
            {
                adjList[row].push_back(col);
                adjList[col].push_back(row);
            }
            
        }
    }
    return 0;
}