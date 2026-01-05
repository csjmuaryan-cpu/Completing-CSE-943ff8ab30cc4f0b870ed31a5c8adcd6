//6. Rotation of matrix by 90 degree
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> rotateMatrixBy90(vector<vector<int>>& matrix) {
 int n = matrix.size();
 // Transpose the matrix
 for (int i = 0; i < n; ++i) {
 for (int j = i + 1; j < n; ++j) {
 swap(matrix[i][j], matrix[j][i]);
 }
 }
 // Reverse each row
 for (int i = 0; i < n; ++i) {
 for (int j = 0; j < n / 2; ++j) {
 swap(matrix[i][j], matrix[i][n - 1 - j]);
 }
 }
 return matrix;
}
void printMatrix(const vector<vector<int>>& matrix) {
 for (const vector<int>& row : matrix) {
 for (int num : row) {
 cout << num << " ";
 }
 cout << endl;
 }
}
int main() {
 vector<vector<int>> matrix = {{1, 2, 3},
 {4, 5, 6},
 {7, 8, 9}};
 cout << "Original Matrix:" << endl;
 printMatrix(matrix);
 cout << "\nRotated Matrix:" << endl;
 vector<vector<int>> rotatedMatrix = rotateMatrixBy90(matrix);
 printMatrix(rotatedMatrix);
 return 0;
}