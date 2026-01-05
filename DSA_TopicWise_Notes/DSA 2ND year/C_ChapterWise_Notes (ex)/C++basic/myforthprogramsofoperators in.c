#include <iostream>
using namespace std;

int main() {
  int x = 5,x1= x + 3,x2 = x - 3,x3= x * 3,x4= x / 3,x5= x % 3,x6=x & 3,x7= x | 3,x8= x ^ 3,x9= x >> 3, x10=x<<3;
  cout << x<<"\t+\n";
  cout<<x2<<"\t-\n";
  cout<<x3<<"\t*\n";
  cout<<x4<<"\t/\n";
  cout<<x5<<"\t%\n";
  cout<<x6<<"\t&\n";
  cout<<x7<<"\t|\n";
  cout<<x8<<"\t^\n";
  cout<<x9<<"\t>>\n";
  cout<<x10<<"\t<<\n";
  return 0;
}
