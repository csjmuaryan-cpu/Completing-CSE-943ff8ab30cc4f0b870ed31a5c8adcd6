//2. Demonstrate that the Vectors are dynamic in nature 
#include <iostream>
#include <vector>
int main() {
 std::vector<int> vec;
 // Display initial size and capacity
 std::cout << "Initial size: " << vec.size() << ", capacity: " << vec.capacity() << std::endl;
 // Add elements to the vector and observe capacity changes
 for (int i = 0; i < 20; ++i) {
 vec.push_back(i);
 std::cout << "After adding element " << i << ", size: " << vec.size() << ", capacity: " << 
vec.capacity() << std::endl;
 }
 // Remove elements from the vector
 for (int i = 0; i < 10; ++i) {
 vec.pop_back();
 std::cout << "After removing element, size: " << vec.size() << ", capacity: " << vec.capacity() << 
std::endl;
 }
 // Clear the vector
 vec.clear();
 std::cout << "After clearing, size: " << vec.size() << ", capacity: " << vec.capacity() << std::endl;
 return 0;
}