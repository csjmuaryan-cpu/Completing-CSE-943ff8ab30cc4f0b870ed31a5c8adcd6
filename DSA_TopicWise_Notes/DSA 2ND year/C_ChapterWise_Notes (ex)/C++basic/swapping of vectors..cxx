//SWAPPINGN IN VECTOR 
/*//1. Using the swap member function of the std::vector class
#include <iostream>
#include <vector>
int main() {
 std::vector<int> vec1 = {100, 200, 300, 400, 500};
 std::vector<int> vec2 = {10, 20, 30, 40, 50};
 // Print original vectors
 std::cout << "Before swap:" << std::endl;
 std::cout << "vec1: ";
 for (int val : vec1) {
 std::cout << val << " ";
 }
 std::cout << std::endl;
 std::cout << "vec2: ";
 for (int val : vec2) {
 std::cout << val << " ";
 }
 std::cout << std::endl;
 // Swap contents of vec1 and vec2
 vec1.swap(vec2);
 // Print swapped vectors
 std::cout << "After swap:" << std::endl;
 std::cout << "vec1: ";
 for (int val : vec1) {
 std::cout << val << " ";
 }
 std::cout << std::endl;
 std::cout << "vec2: ";
 for (int val : vec2) {
 std::cout << val << " ";
 }
 std::cout << std::endl;
 return 0;
}