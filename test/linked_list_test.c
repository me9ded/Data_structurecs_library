#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include "../linked_list/linked_list.h"
#include <stdbool.h>

Node **linked_list;

void test_add_at_last(void){
    linked_list = create_linked_list();
    CU_ASSERT(add_at_last(linked_list,2));
    CU_ASSERT(add_at_last(linked_list,1));
    CU_ASSERT(add_at_last(linked_list,0));
}

void test_add_at_beginning(void){
    linked_list = create_linked_list();
    CU_ASSERT(add_at_beginning(linked_list, 5));
    CU_ASSERT(add_at_beginning(linked_list, 2));
    CU_ASSERT(add_at_beginning(linked_list, 1));

}

void test_search(void){
    linked_list = create_linked_list();
    add_at_last(linked_list,2);
    add_at_last(linked_list,1);
    add_at_last(linked_list,0);
    CU_ASSERT(search(linked_list,1));
    CU_ASSERT(search(linked_list,0));
    CU_ASSERT(search(linked_list,2));
}

void test_delete(void){
    linked_list = create_linked_list();
    add_at_beginning(linked_list, 2);
    add_at_last(linked_list, 3);
    add_at_middle(linked_list, 1);
    CU_ASSERT(delete(linked_list, 2));
    CU_ASSERT(delete(linked_list, 3));
    CU_ASSERT(delete(linked_list, 1));
}

int main(){
    CU_initialize_registry();
    CU_pSuite test_suite = CU_add_suite("testing of the hash table functions",NULL,NULL);
    CU_add_test(test_suite, "testing of the adding function",test_add_at_last);
    CU_add_test(test_suite, "testing of the search function",test_search);
    CU_add_test(test_suite, "testing of the delete function",test_delete);
    CU_run_all_tests();
    CU_cleanup_registry();
    return 0;
}
