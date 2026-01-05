//USE OF PAIR 
/* C++, a vector is a dynamic array provided by the 
Standard Template Library (STL). A pair is another STL 
utility that allows you to store two heterogeneous objects 
as a single unit. When you combine these, you get a vector of pairs, 
which is a dynamic array where each element is a pair.
Understanding pair A pair is a simple container defined in the <utility> 
header that holds two values, which can be of different types. For example:*/
//1. Pair in vector 
#include <utility> // For std::pair
#include <iostream>
using namespace std;
int main() {
 pair<int, string> pairing (2200, "Computer Science");
 cout << pairing.first << " " << pairing.second << std::endl; 
 return 0;
}
//pairing.first accesses the first element (an int in this case).

//pairing.second accesses the second element (a std::string in this case).