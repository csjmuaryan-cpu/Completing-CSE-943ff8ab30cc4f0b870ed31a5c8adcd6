//https://www.hackerrank.com/contests/h-cs1c-14june/challenges
bit manupulation
 counting the repeated  values in has tables
// C++ program to find the array element 
// that appears only once 

#include <iostream> 
using namespace std; 

// Function to find the 
int findSingle(int A[], int ar_size) 
{ 

	// Iterate over every element 
	for (int i = 0; i < ar_size; i++) { 

		// Initialize count to 0 
		int count = 0; 

		for (int j = 0; j < ar_size; j++) { 

			// Count the frequency 
			// of the element 
			if (A[i] == A[j]) { 
				count++; 
			} 
		} 

		// if the frequency of the 
		// element is one 
		if (count == 1) { 
			return A[i]; 
		} 
	} 

	// if no element exist at most once 
	return -1; 
} 

// Driver code 
int main() 
{ 
	int ar[] = { 2, 3, 5, 4, 5, 3, 4 }; 
	int n = sizeof(ar) / sizeof(ar[0]); 
	
	// Function call 
	cout << "Element occurring once is "
		<< findSingle(ar, n); 
	
	return 0; 
}

Given an array of integers, where all elements but one occur twice, find the unique element.

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int lonelyinteger(vector < int > a) {
int ans=0;
    vector<int> ::iterator it;
    for(it=a.begin();it!=a.end();it++)
        {
        ans^=(*it);
    }
    return ans;

}
int main() {
    int res;
    
    int _a_size;
    cin >> _a_size;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    vector<int> _a;
    int _a_item;
    for(int _a_i=0; _a_i<_a_size; _a_i++) {
        cin >> _a_item;
        _a.push_back(_a_item);
    }
    
    res = lonelyinteger(_a);
    cout << res;
    
    return 0;
}
