#include <bits/stdc++.h>
using namespace std;
// Function to traverse and 
// print the array
void Array(int* arr, int n)
{
 int i;
 cout << "Array: ";
 for (i = 0; i < n; i++) 
 {
 cout << arr[i] << " ";
 }
}
// Driver code
int main()
{
 int arr[] = {1,2,3,4,5,6,7,8};
 int n = 8;
 Array(arr, n);
 return 0;
}