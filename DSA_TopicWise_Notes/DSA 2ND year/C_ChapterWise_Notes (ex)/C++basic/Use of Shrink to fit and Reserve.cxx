//Use of Shrink to fit and Reserve
#include <iostream>
#include <vector>
using namespace std;
int main() {
 // Create a vector and reserve space for 100 elements
 vector<int> Kanpur;
 Kanpur.reserve(100);
 // Print the current capacity
 cout << "Capacity after reserving 100: " << Kanpur.capacity() << endl;
 // Add some elements to the vector
 for (int i = 0; i < 10; ++i) {
 Kanpur.push_back(i);
 }
 // Print the current size and capacity
 cout << "Size after adding 10 elements: " << Kanpur.size() << endl;
 cout << "Capacity after adding 10 elements: " << Kanpur.capacity() << endl;
 // Call shrink_to_fit to reduce the capacity to fit the size
 Kanpur.shrink_to_fit();
 // Print the size and capacity after shrink_to_fit
 cout << "Size after shrink_to_fit: " << Kanpur.size() << endl;
 cout << "Capacity after shrink_to_fit: " << Kanpur.capacity() << endl;
 return 0;
}