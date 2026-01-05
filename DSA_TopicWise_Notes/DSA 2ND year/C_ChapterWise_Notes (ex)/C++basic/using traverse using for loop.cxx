//using for loop 
// C++ program to traverse the 
// array using for_each loop
#include <bits/stdc++.h>
#include <iostream> 
using namespace std;
// Driver code
int main()
{
int arr[] = {2, -1, 5, 6, 0, -3};
// Traverse array with for_each 
// using array's data type
cout << "Traverse using array's data type";
for(int x : arr)
cout << x << " ";
cout << endl;
// Traverse array with for_each 
// using auto keyword
cout << "Traverse using auto keyword";
for(auto x : arr)
cout << x << " ";
return 0;
}