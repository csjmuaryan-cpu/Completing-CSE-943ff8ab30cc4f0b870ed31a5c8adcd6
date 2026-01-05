// 4. Declaration of non-square matrix using vector
#include <iostream>

#include <vector>

using namespace std;

int main() {

 int rows = 2; // Number of rows

 int cols = 3; // Number of columns

 // Declare a 2D vector with 2 rows and 3 columns

 vector<vector<int>> matrix(rows, vector<int>(cols));

 // Input values into the matrix

 cout << "Enter values for the matrix:" << endl;

 for (int i = 0; i < rows; ++i) {

 for (int j = 0; j < cols; ++j) {

 cout << "Enter value for matrix[" << i << "][" << j << "]: ";

 cin >> matrix[i][j];

 }

 }

 // Output the matrix

 cout << "Matrix:" << endl;

 for (int i = 0; i < rows; ++i) {
 for (int j = 0; j < cols; ++j) {

 cout << matrix[i][j] << " ";

 }

 cout << endl;

 }

 return 0;

}