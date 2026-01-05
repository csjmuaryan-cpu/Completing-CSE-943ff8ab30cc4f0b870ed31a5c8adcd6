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
void reverseRows(std::vector<std::vector<int>>& vec) {
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
 reverseRows(vec);
 std::cout << "\n2D vector with each row reversed:\n";
 print2DVector(vec);
 return 0;
}