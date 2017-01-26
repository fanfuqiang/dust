
// exported globals
int lib_global = 1;
int *a_ptr;
typedef void (*func_ptr_type) ();
func_ptr_type a_fptr;

void stub () {
        return;
}

void liba_init () {
        stub();
        a_ptr = &lib_global;
        a_fptr = stub;
        lib_global = 3;
}

