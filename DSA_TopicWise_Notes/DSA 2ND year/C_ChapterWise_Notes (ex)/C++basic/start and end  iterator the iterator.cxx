//applied to it (+ start_index and + count).
#include <iostream>
#include <vector>
using namespace std;
int main() {
 vector<int> Malay2 = {1, 21, 31, 41, 5, 6, 7, 18, 19};
 // Define the range of elements to delete
 int start_index = 2; // Index of the first element to delete
 int count = 4; // Number of elements to delete
 // Create iterators pointing to the start and end of the range to delete
 auto start_iter = Malay2.begin() + start_index;
 auto end_iter = start_iter + count;
 // vector<int>::iterator start_iter = vec.begin() + start_index;
 //vector<int>::iterator end_iter = start_iter + count;
 // Delete the range of elements
 Malay2.erase(start_iter, end_iter);
 // Print the vector after deletion
 for (int num : Malay2) {
 cout << num << " ";
 }
 cout << endl;
 return 0;
}