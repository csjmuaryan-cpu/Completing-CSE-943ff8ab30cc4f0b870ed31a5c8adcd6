// Program showing the concept of chain hashing in C for collision removal.
#include <stdio.h>
#include <stdlib.h>
#define BUCKET_SIZE 10
// Node structure for the linked list in each bucket
struct Node {
 int key;
 struct Node* next;
};
// Hash table structure containing an array of linked list nodes
struct HashTable {
 struct Node* table[BUCKET_SIZE];
};
// Initialize the hash table
void initHashTable(struct HashTable* ht) {
 for (int i = 0; i < BUCKET_SIZE; i++) {
 ht->table[i] = NULL;
 }
}
// Hash function (k mod 10)
int hashFunction(int key) {
 return key % BUCKET_SIZE;
}
// Insert a key into the hash table
void insert(struct HashTable* ht, int key) {
 int index = hashFunction(key);
 struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
 newNode->key = key;
 newNode->next = ht->table[index];
 ht->table[index] = newNode;
}
// Print the hash table
void printHashTable(struct HashTable* ht) {
 for (int i = 0; i < BUCKET_SIZE; i++) {
 printf("Bucket %d: ", i);
 struct Node* current = ht->table[i];
 while (current != NULL) {
 printf("%d -> ", current->key);
 current = current->next;
 }
 printf("NULL\n");
 }
}
int main() {
 struct HashTable ht;
 initHashTable(&ht);
 insert(&ht, 1);
 insert(&ht, 11);
 insert(&ht, 21);
 insert(&ht, 3);
 insert(&ht, 13);
 insert(&ht, 23);
 printHashTable(&ht);
 return 0;
}