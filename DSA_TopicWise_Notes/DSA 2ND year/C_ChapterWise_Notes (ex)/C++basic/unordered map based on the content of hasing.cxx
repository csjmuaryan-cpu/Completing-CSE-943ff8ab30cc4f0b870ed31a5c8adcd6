//Unordered Map is based on the Concept of Hashing 
//1. Functions of the unordered map.
#include <iostream>
#include <unordered_map>
#include <string>
int main() {
 // Create and initialize an unordered_map
 std::unordered_map<int, std::string> malay;
 // Insert elements
 malay [1] = "one";
 malay [2] = "two";
 malay [3] = "three";
 // Access elements
 std::cout << "Key 1 has value: "<< malay [1] << std::endl;
 std::cout << "Key 2 has value: " <<malay [2] << std::endl;
 // Check if a key exists
 int key = 4;
 auto it = malay.find(key);
 if (it != malay.end()) {
 std::cout << "Found key " << key << " with value: " << it->second << std::endl;
 } else {
 std::cout << "Key " << key << " not found" << std::endl;
 }
 // Erase an element
 malay.erase(2);
 std::cout << "After erasing key 2, size of map: " << malay.size() << std::endl;
 // Check if map is empty
 if (malay.empty()) {
 std::cout << "Map is empty" << std::endl;
 } else {
 std::cout << "Map is not empty" << std::endl;
 }
 // Clear the map
 malay.clear();
 std::cout << "After clearing, size of map: " << malay.size() << std::endl;
 return 0;
}