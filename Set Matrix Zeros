#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	set<int> rowSet, columnSet;
	int rows = matrix.size();
	int columns =matrix[0].size();
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			if(matrix[i][j]==0){
				rowSet.insert(i);
				columnSet.insert(j);
			}
		}
	}

	for (int row : rowSet) {
        for(int i=0;i<columns;i++){
			if(matrix[row][i]!=0){
				matrix[row][i]=0;
			}
		}
    }
	for (int column : columnSet) {
        for(int j=0;j<rows;j++){
			if(matrix[j][column]!=0){
				matrix[j][column]=0;
			}
		}
    }
}
