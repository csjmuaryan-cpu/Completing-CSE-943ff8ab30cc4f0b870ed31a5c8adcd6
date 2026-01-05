//FIND THE MEAN VECTOR OF THE MATRIX 
#include <iostream>
#include <vector>
using namespace std;
vector<double> findMeanVector(const vector<vector<int>>& matrix) {
 int rows = matrix.size();//matrix.size() returns the number of rows in the vector matrix.
 int cols = matrix[0].size();
//matrix[0].size() returns the number of columns in the first row of the vector matrix. 
//Since this is a 2D vector, all rows have the same number of columns.
 vector<double> meanVector(cols, 0.0); // Initialize meanVector with 0.0 for each column
 for (int j = 0; j < cols; ++j) {
 double sum = 0.0;
 for (int i = 0; i < rows; ++i) {
 sum += matrix[i][j];
 }
 meanVector[j] = sum / rows; // Calculate mean for column j
 }
 return meanVector;
}
int main() {
 vector<vector<int>> matrix = {{1, 2, 3},
 {4, 5, 6},
 {7, 8, 9}};
 vector<double> meanVector = findMeanVector(matrix);
 cout << "Mean vector:" << endl;
 for (double mean : meanVector) {
 cout << mean << " ";
 }
 cout << endl;
 return 0;
}