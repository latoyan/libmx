#include "libmx.h"

char *mx_file_to_str(const char *file) {
    int f = open(file, O_RDONLY);
    if (f < 0) return NULL;
    int k = 0;
    char buf[1];
    int n = read(f, buf, sizeof(buf));
    while (n > 0) {
    	k++;
    	n = read(f, buf, sizeof(buf));
    }
    close(f);
    f = open(file, O_RDONLY);
    char *s = mx_strnew(k + 1);
    if (!s) return NULL;
    char *p = s;
    int m = read(f, buf, sizeof(buf));
    while (m > 0) {
    	*s = *buf;
    	m = read(f, buf, sizeof(buf));
    	s++;
    }    
    close(f);
	return p;
}

/*int main(){
    char *c = "word.txt";
    printf ("%s \n", mx_file_to_str(c));
    printf ("%zu \n", malloc_size (mx_file_to_str(c)));
    return 0;
}*/
