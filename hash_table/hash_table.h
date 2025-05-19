#ifndef HASH_TABLE_H
#define HASH_TABLE_H
// for now the hash table struct will only accept integer keys and values for simplicity 
typedef struct Hash_Table{
    int* keys;
    int* values;
    size_t size;
} Hash_Table;

int add(Hash_Table*arr, int number);
int delete(Hash_Table*arr,int number);
int search(Hash_Table*arr,int number);
int *create_hash_table(Hash_Table *arr);
#endif