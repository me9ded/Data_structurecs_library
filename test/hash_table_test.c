#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include "../hash_table/hash_table.h"
#include <stdbool.h>

Hash_Table *array;

void test_add(void){
    array=create_hash_table();
    CU_ASSERT(add(array,2));
    CU_ASSERT(add(array,0));
}

void test_search(void){
    array=create_hash_table();
    add(array, 2);
    add(array, 2);
    add(array, 2);
    CU_ASSERT(search(array,1));
    CU_ASSERT(search(array,0));
    CU_ASSERT(search(array,2));


}

void test_delete(void){
    array=create_hash_table();
    add(array, 2);
    add(array, 2);
    add(array, 2);
    CU_ASSERT(delete(array, 2));
    CU_ASSERT(delete(array, 0));
    CU_ASSERT(delete(array, 1));
}

int main(){

    CU_initialize_registry();
    CU_pSuite test_suite = CU_add_suite("testing of the hash table functions",NULL,NULL);
    CU_add_test(test_suite, "testing of the adding function",test_add);
    CU_add_test(test_suite, "testing of the search function",test_search);
    CU_add_test(test_suite, "testing of the delete function",test_delete);
    CU_run_all_tests();
    CU_cleanup_registry();
    return 0;
}
