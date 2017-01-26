
volatile int lib_flag = 1;
int *b_ptr;
typedef void (*func_ptr_type) ();
func_ptr_type b_fptr;

extern func_ptr_type a_fptr;
extern void liba_init ();
extern void stub ();
extern int lib_global;
extern int* a_ptr;

static void libb_init () {
        b_ptr = &lib_global;
        b_fptr = stub;
} 

void libb_test () {
        stub();
        libb_init();

        if (a_fptr == b_fptr)
                lib_flag = 2;
        if (a_ptr == b_ptr)
                lib_flag = 3;
}

