#include <iostream>
using namespace std;

int main() {
  int x = 5;
  int y = 3;
  cout<<"\ncomparision operator\n";
  cout << (x == y)<<"\t"; // returns 0 (false) because 5 is not equal to 3
  cout << (x != y)<<"\t"; // returns 1 (true) because 5 is not equal to 3
  cout << (x > y)<<"\t"; // returns 1 (true) because 5 is greater than 3
  cout << (x < y)<<"\t"; // returns 0 (false) because 5 is not less than 3
  cout << (x >= y)<<"\t"; // returns 1 (true) because five is greater than, or equal, to 3
  cout << (x <= y); // returns 0 (false) because 5 is neither less than or equal to 3
  cout<<"\nlogical operator\n";
  cout << (x > 3 && x < 10)<<"\t"; // returns true (1) because 5 is greater than 3 AND 5 is less than 10
  cout << (x > 3 || x < 4)<<"\t"; // returns true (1) because one of the conditions are true (5 is greater than 3, but 5 is not less than 4)
  cout << (!(x > 3 && x < 10))<<"\n"; // returns false (0) because ! (not) is used to reverse the result
  cout<<"\nbitwise operator\n";
  cout << "x & y = " << (x & y) << endl;
  cout << "x | y = " << (x | y) << endl;
  cout << "x ^ y = " << (x ^ y) << endl;
  int num1 = 35;
  int num2 = -150;
  cout << "~(" << num1 << ") = " << (~num1) << endl;
  cout << "~(" << num2 << ") = " << (~num2) << endl;
  // declaring two integer variables
  int num = 212, i;

  // Shift Right Operation
  cout << "Shift Right:" << endl;

  // Using for loop for shifting num right from 0 bit to 3 bits
  for (i = 0; i < 4; i++) {
  	cout << "212 >> " << i << " = " << (212 >> i) << endl;
  }

  // Shift Left Operation
  cout << "\nShift Left:" << endl;
  // Using for loop for shifting num left from 0 bit to 3 bits
  for (i = 0; i < 4; i++) {
  	cout << "212 << " << i << " = " << (212 << i) << endl;
  }
  return 0;
}
