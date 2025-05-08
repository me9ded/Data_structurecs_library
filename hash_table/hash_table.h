#ifndef HASH_TABLE_H
#define HASH_TABLE_H
// for now the hash table struct will only accept integer keys and values for simplicity 
typedef struct Hash_Table{
    int* keys;
    int* values;
    size_t size;
} Hash_Table;

void add();
void delete();
int search();
Hash_Table *create_hash_table();
#endif