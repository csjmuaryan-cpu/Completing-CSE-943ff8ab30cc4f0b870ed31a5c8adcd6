//3. C++ program that returns the elements in a vector 
//that are strictly smaller than their adjacent left and right neighbours.
#include <iostream>
#include <vector>
using namespace std;
vector<int> findElements(const vector<int>& nums) {
 vector<int> result;
 if (nums.size() < 3) {
 // Not enough elements to compare
 return result;
 }
 for (int i = 1; i < nums.size() - 1; ++i) {
 if (nums[i] < nums[i - 1] && nums[i] < nums[i + 1]) {
 result.push_back(nums[i]);
 }
 }
 return result;
}
int main() {
 vector<int> nums = {3, 1, 2, 5, 4, 6, 9, 7};
 vector<int> result = findElements(nums);
 cout << "Elements strictly smaller than their adjacent left and right neighbors:" << endl;
 for (int num : result) {
 cout << num << " ";
 }
 cout << endl;
 return 0;
}