
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    int num = 1;
    int sign = 1; // to alternate between addition and subtraction

    for (int i = 0; i < n; i++) {
        cout << num * sign << " ";
        num += 2;
        sign *= -1; // alternate between positive and negative sign
    }

    return 0;
}
//This program takes the number of terms from the user and prints the series accordingly. It starts with 1, then alternates between adding and subtracting the next odd number.