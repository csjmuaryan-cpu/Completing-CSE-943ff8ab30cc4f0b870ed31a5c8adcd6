//approach three 3 using range based loop 
// C++ program to traverse the 
// array using range-based loop
#include <bits/stdc++.h>
#include <iostream> 
using namespace std;
// Driver code
int main()
{
int arr[] = {2, -1, 5, 6, 0, -3};
for (const auto &var : arr) 
{ 
cout << var << " " ; 
} 
return 0;
}