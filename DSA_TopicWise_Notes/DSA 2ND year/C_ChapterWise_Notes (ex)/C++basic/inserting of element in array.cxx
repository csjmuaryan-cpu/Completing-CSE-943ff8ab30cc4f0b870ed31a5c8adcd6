//Inserting elements from the initializer list 
#include <iostream>
#include <vector>
int main() {
 std::vector<int> vec = {1, 2, 3, 4, 5};
 // Insert elements {100, 200} at the fifth position (index 4).
 //Inserts 1100 and 1200 at position 4.
 //All elements from position 4 onwards are shifted to the right.
 vec.insert(vec.begin() + 4, {1100, 1200});
 // Print the vector
 for (int val : vec) {
 std::cout << val << " ";
 }
 return 0;
}