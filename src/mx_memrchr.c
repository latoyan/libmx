#include "libmx.h"

void *mx_memrchr(const void *s, int c, size_t n){
	const char *d = s;
	while (n >= 0){
		n--;
		if (d[n] == c){
			return (void *)&d[n];
		}
	}
	return NULL;
}

/*int main(){
    char str[] = "Example strin3";
    printf ("%s", mx_memrchr(str, '3', 14));
    return 0;
}*/
