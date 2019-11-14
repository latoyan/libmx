#include "libmx.h"

void *mx_realloc(void *ptr, size_t size){
    char *d = NULL;
    char *c = ptr;
    if (size == 0){
        free(ptr);
        ptr = NULL;
        return ptr;
    }
    if (ptr == NULL){
        d = malloc(size * sizeof(ptr));
    }
    else{
        d = malloc(size * sizeof(ptr));
        if (d == NULL) return NULL;
        size_t i = 0;
        for (i = 0; c[i] && i < size; i++){
            d[i] = c[i];
        }
    }
    return d;
}
