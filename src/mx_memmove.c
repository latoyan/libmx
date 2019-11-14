#include "libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len){
    char *d = dst;
    const char *s = src;
    char tmp[len];
    for (size_t i = 0; i < len; i++){
        tmp[i] = s[i];
    }
    for (size_t i = 0; i < len; i++){
        d[i] = tmp[i];
    }
    return dst;
}

/*int main(){
    char test_dst1 []= "1234567890";
    mx_memmove(&test_dst1[4], &test_dst1[3], 3);
    if (mx_strcmp("1234456890", test_dst1) == 0) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS:  \"1234567890\", \"567890\",  \"4567890\", 3\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS:  \"1234567890\", \"567890\",  \"4567890\", 3\033[0m");
    }
}*/
