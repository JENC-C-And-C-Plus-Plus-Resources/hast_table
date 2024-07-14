#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#include "models.h"

#define CAPACITY 5000 // Size of the hash table.

unsigned long hash_function(char* str);
Ht_item* create_item(char* key, char* value);
HashTable* create_table(int size);
void free_item(Ht_item* item);
void free_table(HashTable* table);
void print_table(HashTable* table);
void ht_insert(HashTable* table, char* key, char* value);
char* ht_search(HashTable* table, char* key);
void print_search(HashTable* table, char* key);

#endif // HASH_TABLE_H