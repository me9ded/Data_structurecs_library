#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include "../hash_table/hash_table.h"
#include <stdbool.h>

Hash_Table *array;

void test_generate_hasht_able(){
    CU_ASSERT(create_hash_table(array));
}

void test_add(void){
    create_hash_table(array);
    // this case should return true as the hashtable is able to accept integers.
    CU_ASSERT(add(array,2));
    CU_ASSERT(add(array,0));
    CU_ASSERT(add(array,-1));
    // the rest of these test cases should return false as they 
    CU_ASSERT(add(array,1.1));
    CU_ASSERT(add(array,-2.5));
    CU_ASSERT(add(array,'a'));
    //CU_ASSERT(add(arr,'amine'));
    CU_ASSERT(add(array,true));
}

void test_search(void){
    create_hash_table(array);
    // these test cases are the part of the happy path which is the expected result, as a result the expected result
    // must be true.
    CU_ASSERT(search(array,1));
    CU_ASSERT(search(array,0));
    CU_ASSERT(search(array,-1));
    // the rest must return false, because the hashtbale only accepts integers for now.
    CU_ASSERT(search(array,'a'));
    //CU_ASSERT(search(arr,'amine'));
    CU_ASSERT(search(array,true));
    CU_ASSERT(search(array,false));

}

void test_delete(void){
    create_hash_table(array);
    CU_ASSERT(delete(array, 2));
    CU_ASSERT(delete(array, 0));
    CU_ASSERT(delete(array, 1));
    CU_ASSERT(delete(array, 1.1));
    CU_ASSERT(delete(array, -2));
    CU_ASSERT(delete(array, -2.5));
    CU_ASSERT(delete(array, 'a'));
    //CU_ASSERT(delete(arr, 'amine'));
    CU_ASSERT(delete(array, false));

}

int main(){
    CU_initialize_registry();

    CU_pSuite test_suite = CU_add_suite("testing of the hash table functions",NULL,NULL);
    CU_add_test(test_suite, "testing of the adding function",test_add);
    CU_run_all_tests();
    CU_cleanup_registry();

    return 0;
}
