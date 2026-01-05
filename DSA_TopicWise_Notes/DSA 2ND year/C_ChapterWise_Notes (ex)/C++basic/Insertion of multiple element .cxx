//Inserting the Multiple element in the vector 
#include <iostream>
#include <vector>
using namespace std;
int main() {
 vector<int> vec = {1, 2, 3, 4, 5};
 // Insert 3 elements of value 20 at the third position (index 2)
 vec.insert(vec.begin() + 3, 4, 20);
 //Inserts three 20s at position 3.
 //All elements from position 3 onwards are shifted to the right.
 // Print the vector
 for (int val : vec) {
 cout << val << " ";
 }
 return 0;
}
*