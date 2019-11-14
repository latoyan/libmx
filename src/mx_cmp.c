#include "libmx.h"

bool mx_cmp(void *a, void *b) {
    char *ta = a;
    char *tb = b;
    if(mx_strcmp(ta, tb) > 0) {
        return true;
    }
    else {
        return false;
    }
}
