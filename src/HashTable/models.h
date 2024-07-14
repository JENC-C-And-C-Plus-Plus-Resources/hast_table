#ifndef MODELS_H
#define MODELS_H

/**
 * Hash Table item
 */
typedef struct Ht_item {
    char* key;
    char* value;
} Ht_item;


/**
 * Hast table will contain an array of pointers of Ht_item
 */
typedef struct HashTable
{
    Ht_item** items;
    int size;
    int count;
} HashTable;

#endif // MODELS_H