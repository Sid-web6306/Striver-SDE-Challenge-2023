#include <iostream>
#include <vector>
using namespace std;

vector<vector<long long int>> printPascal(int n) {
    vector<vector<long long int>> matrix(n);
    // Write your code here.
    for (int i = 0; i < n; i++) {
      matrix[i].resize(i+1);
        for (int j = 0; j <= i; j++) {
            if (i == 0 && j == 0) {
                matrix[i][j] = 1;
            } else {
                if (j == 0) {
                    matrix[i][j] = 1;
                } else if (j == i) {
                    matrix[i][j] = 1;
                } else {
                    matrix[i][j] = matrix[i - 1][j - 1] + matrix[i - 1][j];
                }
            }
        }
    }
    return matrix;
}