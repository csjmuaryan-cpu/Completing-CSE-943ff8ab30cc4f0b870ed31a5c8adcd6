//2. Pair in the vector 
#include <vector> // For std::vector
#include <utility> // For std::pair
#include <iostream> // For std::cout
int main() {
 // Create a vector of pairs
 std::vector<std::pair<int, std::string>> intervals;
 // Add pairs to the vector using emplace_back
 intervals.emplace_back(1, "PSA"); // Adds the pair (1, "PSA")
 intervals.emplace_back(1, "xyz"); // Adds the pair (1, "xyz")
 //intervals.emplace_back(10, 15); 
 
 // Iterate through the vector and print the pairs
 for (const auto& interval : intervals) {
 std::cout << "First: " << interval.first << ", Second: " << interval.second << std::endl;
 }
 return 0;
}
//emplace_back vs. push_back
//push_back: Adds an element to the end of the vector by copying or moving 
//the element into the vector.
//emplace_back: Constructs the element directly in the memory allocated for 
//the vector, using the arguments provided.