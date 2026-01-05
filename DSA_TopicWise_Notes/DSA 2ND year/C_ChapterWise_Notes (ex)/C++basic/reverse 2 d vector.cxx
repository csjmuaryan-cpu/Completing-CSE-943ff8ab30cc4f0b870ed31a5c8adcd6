//reverse of 2-d vector 
#include <iostream>
#include <vector>
#include <algorithm>
void print2DVector(const std::vector<std::vector<int>>& vec) {
 for (const auto& row : vec) {
 for (int val : row) {
 std::cout << val << " ";
 }
 std::cout << std::endl;
 }
}
void reverse2DVector(std::vector<std::vector<int>>& vec) {
 // Reverse the order of rows
 std::reverse(vec.begin(), vec.end());
 
 // Reverse the order of elements in each row
 for (auto& row : vec) {
 std::reverse(row.begin(), row.end());
 }
}
int main() {
 std::vector<std::vector<int>> vec = {
 {1, 2, 3},
 {4, 5, 6},
 {7, 8, 9}
 };
 std::cout << "Original 2D vector:\n";
 print2DVector(vec);
 reverse2DVector(vec);
 std::cout << "\nReversed 2D vector:\n";
 print2DVector(vec);
 return 0;
}