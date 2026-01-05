//creation of vector 
#include <iostream>
#include <vector>
using namespace std;
int main() {
 // initializer list
 vector<int> M = {11, 12, 13, 14, 15};
 // uniform initialization
 vector<int> N {6, 7, 8, 9, 10};
 // method 3
 vector<int> O (5, 12);
 cout << "vector1 = ";
 // ranged loop
 for (const int & i : M) {
 cout << i << " ";
 }
 cout << "\nvector2 = ";
 // ranged loop
 for (const int & i : N) {
 cout << i << " ";
 }
 cout << "\nvector3 = ";
 // ranged loop
 for (int & i : O) 
 {
 cout << i << " ";
 }
 return 0;
}
