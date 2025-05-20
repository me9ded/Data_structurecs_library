hash_table: hash_table.c
	gcc hash_table.c -o hash_table

hash_table_test: hash_table_test.c
	gcc hash_table_test.c -o hash_table_test

clean:
	rm -f *.o

