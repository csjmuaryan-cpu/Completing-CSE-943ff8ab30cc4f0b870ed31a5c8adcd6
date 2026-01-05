//declaration of nxn matrix using vectors 
#include <iostream>
#include <vector>
using namespace std;
int main() {
 int n = 3; // Size of the square matrix
 // Declare a 2D vector with n rows and n columns, initialized to 0
 vector<vector<int>> matrix(n, vector<int>(n,0));
 // Output the matrix
 for (int i = 0; i < n; ++i) {
 for (int j = 0; j < n; ++j) {
 cout << matrix[i][j] << " ";
 }
 cout << endl;
 }
 return 0;
}