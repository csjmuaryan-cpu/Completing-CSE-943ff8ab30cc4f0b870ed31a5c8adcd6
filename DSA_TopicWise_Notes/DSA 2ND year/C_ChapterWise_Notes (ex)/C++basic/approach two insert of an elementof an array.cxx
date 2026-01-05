//Approach 2 for insertion of element in an array 
#include <iostream>
void insert(int arr[], int & size, int pos, int value) {
 if (pos < 0 || pos > size) {
 std::cout << "Invalid position\n";
 return;
 }
 // Shift elements to the right
 for (int i = size; i > pos; i--) {
 arr[i] = arr[i - 1];
 }
 // Insert the new element
 arr[pos] = value;
 size++;
}
int main() {
 const int maxSize = 10;
 int arr[maxSize] = {1, 2, 3, 4, 5};
 int size = 5;
 // Inserting 10 at position 2
 insert(arr, size, 2, 10);
 // Printing the array
 for (int i = 0; i < size; i++) {
 std::cout << arr[i] << " ";
 }
 std::cout << std::endl;
 return 0;
}