/*In C++, the statement for (const auto &var : arr) is a range-based 
for loop. It iterates over each element in the arr array (or any 
other iterable collection) and assigns each element to the 
variable var. The const auto & part indicates that var is a 
constant reference to the elements in the array, which means var 
cannot be modified and is accessed by reference, not by value.
INSERTION OF ELEMENT IN AN ARRAY AT SPECIFIC 
ocation.*/
// C++ Program to Insert an element 
// at a specific position in an Array 
#include <iostream> 
using namespace std; 
// Function to insert x in arr at position pos 
int * insert(int n, int arr[], int x, int pos) 
{ 
int i; 
// increase the size by 1 
n++; 
// shift elements forward 
for (i = n; i >= pos; i--)
arr[i] = arr[i - 1]; 
// insert x at pos 
arr[pos - 1] = x; 
return arr; 
} 
// Driver Code 
int main() 
{ 
int arr[100] = { 0 }; 
int i, x, pos, n = 10; 
// initial array of size 10 
for (i = 0; i < 10; i++) 
arr[i] = i + 1; 
// print the original array
for (i = 0; i < n; i++) 
cout << arr[i] << " "; 
cout << endl; 
// element to be inserted 
x = 50; 
// position at which element is to be inserted 
pos = 5; 
// Insert x at pos 
insert(n, arr, x, pos); 
// print the updated array 
for (i = 0; i < n + 1; i++) 
cout << arr[i] << " "; 
cout << endl; 
return 0; 
}
