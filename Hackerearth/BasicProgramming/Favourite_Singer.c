// To solve this problem, let's break it down step by step:

// ### Problem Understanding:
// We need to determine the **number of favorite singers** in Bob's playlist. The **favorite singer(s)** are the ones who have the most songs in the playlist. If multiple singers have the same highest number of songs, we count how many of them share that maximum.

// ### Steps to Solve:

// 1. **Input Parsing:**
//    - The first line contains an integer `n`, which indicates the number of songs in the playlist.
//    - The next `n` integers represent the singers associated with each song.

// 2. **Frequency Count:**
//    - We need to calculate how many times each singer appears in the list. This can be efficiently done using a dictionary (or a `Counter` from the `collections` module) to map each singer to the number of songs they have.

// 3. **Find Maximum Frequency:**
//    - After counting the frequencies of each singer, we need to find the highest frequency (i.e., the maximum number of songs sung by a single singer).

// 4. **Count Favorite Singers:**
//    - Finally, we count how many singers have the maximum frequency of songs.

// ### Algorithm:

// 1. Parse the input.
// 2. Use a `Counter` to count the frequency of each singer in the playlist.
// 3. Find the maximum frequency.
// 4. Count how many singers have this maximum frequency.
// 5. Output the result.

// ### Solution Code:
#include <stdio.h>

#define MAX_SINGER_ID 1000  // Define a large enough number to hold singer IDs

int main() {
    int n;
    scanf("%d", &n);  // Read number of songs
    
    int singers[n];  // Array to store the singers' IDs
    int freq[MAX_SINGER_ID] = {0};  // Array to store frequency of each singer ID
    
    // Read the singers for each song
    for (int i = 0; i < n; i++) {
        scanf("%d", &singers[i]);
        freq[singers[i]]++;  // Increment the frequency of this singer
    }
    
    // Find the maximum frequency
    int max_freq = 0;
    for (int i = 0; i < MAX_SINGER_ID; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];  // Update the maximum frequency
        }
    }
    
    // Count how many singers have this maximum frequency
    int favorite_singers_count = 0;
    for (int i = 0; i < MAX_SINGER_ID; i++) {
        if (freq[i] == max_freq) {
            favorite_singers_count++;  // Increment the count for favorite singers
        }
    }
    
    // Output the result
    printf("%d\n", favorite_singers_count);
    
    return 0;
}


// ```python
// from collections import Counter

// def favorite_singers_count(n, singers):
//     # Count the frequency of each singer in the list
//     freq = Counter(singers)
    
//     # Find the maximum frequency
//     max_freq = max(freq.values())
    
//     # Count how many singers have this maximum frequency
//     favorite_singers = sum(1 for count in freq.values() if count == max_freq)
    
//     return favorite_singers

// # Reading input
// n = int(input())  # Number of songs in the playlist
// singers = list(map(int, input().split()))  # List of singers for each song

// # Output the result
// print(favorite_singers_count(n, singers))
// ```

// ### Explanation:

// 1. **Input Parsing:**
//    - The first line is parsed to get the number of songs `n`.
//    - The second line contains a list of integers representing the singers associated with the songs. We use `map(int, input().split())` to convert this space-separated string of integers into a list of integers.

// 2. **Using `Counter`:**
//    - We use `Counter(singers)` to count the occurrence of each singer in the list. This returns a dictionary-like object where the keys are the singer IDs and the values are the number of songs associated with each singer.

// 3. **Finding Maximum Frequency:**
//    - `max(freq.values())` gives the maximum number of songs sung by a single singer.

// 4. **Counting Favorite Singers:**
//    - `sum(1 for count in freq.values() if count == max_freq)` iterates over the frequencies and counts how many times the maximum frequency appears.

// 5. **Result Output:**
//    - Finally, we print the count of favorite singers.

// ### Example Walkthrough:

// #### Sample Input:
// ```
// 5
// 1 1 2 2 4
// ```

// - **Step 1:** The list of singers is `[1, 1, 2, 2, 4]`.
// - **Step 2:** The frequency count is:
//   - Singer 1 appears 2 times.
//   - Singer 2 appears 2 times.
//   - Singer 4 appears 1 time.
  
//   So, the frequency dictionary is `{1: 2, 2: 2, 4: 1}`.

// - **Step 3:** The maximum frequency is `2` (since both singers 1 and 2 appear 2 times).

// - **Step 4:** We count how many singers have this maximum frequency. Here, singers 1 and 2 have the maximum frequency, so the result is `2`.

// #### Output:
// ```
// 2
// ```

// ### Time Complexity:
// - **Counting Frequencies:** The `Counter` function iterates over the `n` elements in the list, so it takes O(n) time.
// - **Finding Maximum Frequency:** Finding the maximum value in a dictionary takes O(k), where `k` is the number of unique singers (at most `n`).
// - **Counting Favorite Singers:** This also takes O(k), where `k` is the number of unique singers.

// Overall, the time complexity is **O(n)**, which is efficient for large inputs.

// ### Space Complexity:
// - We store the frequency counts, so the space complexity is **O(k)**, where `k` is the number of unique singers in the list.

// This solution is efficient and should work within the provided constraints.