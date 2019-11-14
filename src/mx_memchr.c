#include "libmx.h"

void *mx_memchr(const void *s, int c, size_t n){
    const char *d = s;
    size_t i = 0;
    while (i < n){
        if (d[i] == c){
            return (void *)&d[i];
        }
        i++;
    }
    return NULL;
}

/*int main(){
    char str[] = "Example strin3";
    printf ("%s", mx_memchr(str, '3', 14));
    return 0;
}*/
