#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include <hash_table.h>
#include <stdbool.h>

Hash_Table *arr;

void test_generate_hasht_able(){
    CU_ASSERT(create_hash_table(arr));
}

void test_add(){
    create_hash_table(arr);
    // this case should return true as the hashtable is able to accept integers.
    CU_ASSERT(add(arr,2));
    CU_ASSERT(add(arr,0));
    CU_ASSERT(add(arr,-1));
    // the rest of these test cases should return false as they 
    CU_ASSERT(add(arr,1.1));
    CU_ASSERT(add(arr,-2.5));
    CU_ASSERT(add(arr,'a'));
    CU_ASSERT(add(arr,'amine'));
    CU_ASSERT(add(arr,true));
}

void test_search(){
    create_hash_table(arr);
    // these test cases are the part of the happy path which is the expected result, as a result the expected result
    // must be true.
    CU_ASSERT(search(arr,1));
    CU_ASSERT(search(arr,0));
    CU_ASSERT(search(arr,-1));
    // the rest must return false, because the hashtbale only accepts integers for now.
    CU_ASSERT(search(arr,'a'));
    CU_ASSERT(search(arr,'amine'));
    CU_ASSERT(search(arr,true));
    CU_ASSERT(search(arr,false));

}

void test_delete(){
    create_hash_table(arr);
    CU_ASSERT(delete(arr, 2));
    CU_ASSERT(delete(arr, 0));
    CU_ASSERT(delete(arr, 1));
    CU_ASSERT(delete(arr, 1.1));
    CU_ASSERT(delete(arr, -2));
    CU_ASSERT(delete(arr, -2.5));
    CU_ASSERT(delete(arr, 'a'));
    CU_ASSERT(delete(arr, 'amine'));
    CU_ASSERT(delete(arr, false));

}
