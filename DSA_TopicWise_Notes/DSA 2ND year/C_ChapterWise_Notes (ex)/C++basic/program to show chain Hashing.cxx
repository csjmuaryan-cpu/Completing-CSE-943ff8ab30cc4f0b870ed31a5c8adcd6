// 4. Program to show chain hashing in c++ for collision removal 
#include <iostream>
#include <vector>
using namespace std;
// Node structure for the linked list in each bucket
struct Node {
 int key;
 Node* next;
 Node(int k) : key(k), next(nullptr) {}
};
// Hash table using chain hashing
class HashTable {
private:
 vector<Node*> table;
 int tableSize;
public:
 // Constructor
 HashTable(int size) : tableSize(size) {
 table.resize(tableSize, nullptr);
 }
 // Hash function (k mod 10)
 int hashFunction(int key) {
 return key % tableSize;
 }
 // Insert a key into the hash table
 void insert(int key) {
 int index = hashFunction(key);
 Node* newNode = new Node(key);
 newNode->next = table[index];
 table[index] = newNode;
 }
 // Print the hash table
 void printHashTable() {
 for (int i = 0; i < tableSize; ++i) {
 cout << "Bucket " << i << ": ";
 Node* current = table[i];
 while (current) {
 cout << current->key << " -> ";
 current = current->next;
 }
 cout << "NULL" << endl;
 }
 }
};
int main() {
 HashTable ht(10); // Create hash table with bucket size 10
 // Insert keys into the hash table
 ht.insert(1);
 ht.insert(11);
 ht.insert(21);
 ht.insert(3);
 ht.insert(13);
 ht.insert(23);
 ht.insert(24);
 ht.insert(25);
 ht.insert(26);
 // Print the hash table
 ht.printHashTable();
 return 0; }