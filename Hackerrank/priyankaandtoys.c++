#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Item {
    int weight;
    int index;
};

int toys(vector<int> w) {
    int n = w.size();
    vector<Item> items(n);
    for (int i = 0; i < n; ++i) {
        items[i] = {w[i], i+1};  // Store weight and original index (1-based)
    }

    // Sort based on weight
    sort(items.begin(), items.end(), [](const Item& a, const Item& b) {
        return a.weight < b.weight;
    });

    int containerCount = 0;

    // Process items greedily
    for (int i = 0; i < n; ++i) {
        if (items[i].weight == -1) continue; // Already assigned to a container
        containerCount++;
        int minWeight = items[i].weight;
        cout << "Container " << containerCount << ": ";
        cout << "(" << items[i].index << ") " << items[i].weight << " ";
        items[i].weight = -1; // Mark as used

        // Add all items that fit in the current container
        for (int j = i + 1; j < n; ++j) {
            if (items[j].weight != -1 && items[j].weight <= minWeight + 4) {
                // Add to current container
                cout << "(" << items[j].index << ") " << items[j].weight << " ";
                items[j].weight = -1; // Mark as used
            }
        }
        cout << endl;
    }

    return containerCount;
}

int main() {
    int n;
    cin >> n; // Number of items
    vector<int> weights(n);
    for (int i = 0; i < n; ++i) {
        cin >> weights[i];
    }

    int result = toys(weights);
    cout << "Minimum containers needed: " << result << endl;

    return 0;
}