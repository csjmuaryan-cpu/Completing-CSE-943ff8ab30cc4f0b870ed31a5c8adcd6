/*//Inserting range of elements 
#include <iostream>
#include <vector>
int main() {
 std::vector<int> vec1 = {1, 2, 3, 4, 5};
 std::vector<int> vec2 = {10, 20, 30};
 //Inserts elements from vec2 into vec1 starting at position 1.
 //All elements from position 1 onwards are shifted to the right.
 // Insert elements from vec2 into vec1 at the second position (index 1)
 vec1.insert(vec1.begin() + 2, vec2.begin(), vec2.end());
 // Print the vector
 for (int val : vec1) {
 std::cout << val << " ";
 }
 return 0;
}