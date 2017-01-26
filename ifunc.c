#include <stdio.h>

int global = 1;
static int minus_one (void) { return -1; }
static int zero (void) { return 0; }
void * library_func2_ifunc (void) __asm__ ("library_func2");
void * library_func2_ifunc (void) { return global ? minus_one : zero ; }
__asm__(".type library_func2, %gnu_indirect_function");

int main () {
        int res = 1;

        //res += library_func1();
        res += library_func2();
        printf("[-] => %d\n",res);
        
        return res;
}

