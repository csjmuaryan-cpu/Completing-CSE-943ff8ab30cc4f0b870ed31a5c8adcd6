//INSERTION OF ELEMENT IN THE VECTOR
/*// Insert a single element 
#include <iostream>
#include <vector>
using namespace std;
int main() {
 vector<int> vect = {1, 2, 3, 4, 5};
 // Insert a single element at the third position (index 2)
 vect.insert(vect.begin() + 2, 10);
 // Print the vector
 for (int val : vect) {
 cout << val << " ";
 }
 return 0;
}