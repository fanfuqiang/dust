#include <stdio.h>

typedef void (*func_ptr_type) ();

extern int lib_flag;
extern int lib_global;
extern void stub ();
extern void liba_init ();
extern int *b_ptr;
extern func_ptr_type b_fptr;
extern void libb_test();

int *main_ptr;
func_ptr_type main_fptr;

int main () {
        main_ptr = &lib_global;
        main_fptr = stub;

        stub();
        // liba
        liba_init();
        // libb
        libb_test();

        if (main_ptr == b_ptr)
                lib_flag = 4;
        if (main_fptr == b_fptr)
                lib_flag = 5;

        puts("hello\n");
}

