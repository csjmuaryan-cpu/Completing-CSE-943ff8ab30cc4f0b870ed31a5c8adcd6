//2. Basic Vector Operation 
//Add elements to vector 
#include <iostream>
#include <vector>
using namespace std;
int main() {
 vector<int> num {100, 200,300,400,500,600};
 num.push_back(16000);
 num.push_back(17000);
 cout << "Initial Vector: ";
 for (const int& i : num) {
 cout << i << " ";
 }
 cout<<"Size 1:"<<num.size()<<endl;
 cout<<"Capacity 1:"<<num.capacity()<<endl;
 // add the integers 6 and 7 to the vector
 num.push_back(6000);
 num.push_back(7000);
 cout << "\nUpdated Vector: ";
 for (const int& i : num) {
 cout << i << " ";
 }
 cout<<endl<<"$ IMPORTANT FUNCTION PRESENT IN VECTOR"<<endl;
 
 cout << "First element: " << num.front() << endl;
 cout << "Last element: " << num.back() << endl;
 cout<<"Size 2:"<<num.size()<<endl;
 //cout<<"Capacity 2:"<<num.capacity()<<endl;
 num.resize(3);
 cout << "After resize to 3, size is: " << num.size() << endl;
 cout<<"Size 3:"<<num.size()<<endl;
 //cout<<"Capacity 3:"<<num.capacity()<<endl;
 cout << "Last element: " << num.back() << endl;
 // Insert at beginning
 num.insert(num.begin(), 50);
 cout << "After insert at beginning, first element is: " << num.front() << endl;
  // Erase element
 num.erase(num.begin() + 2);
 cout << "After erase at index 1, size is: " << num.size() << endl;
 // Clear
 num.clear();
 cout << "After clear, size is: " << num.size() << endl;
 return 0;
}
[]