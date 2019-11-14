#include "libmx.h"

int mx_count_words(const char *str, char c){
    if (!str) return -1; 
    int s = 0;
    while (*str != '\0'){
        if (*str == c)
            while (*str == c && *str != '\0')
                str++;
        if (*str != c && *str != '\0'){
            s++;
            while (*str != c && *str != '\0')
                str++;
        }
    }
    return s;
}

/*int main(){
    char str[] = " follow the white * rabbit ";
    printf("%d\n", mx_count_words(str, ' '));
    printf("%d\n", mx_count_words(str, '*'));
    printf("%d\n", mx_count_words(NULL, ' '));
    printf("%d\n", mx_count_words(str, 'w'));
    printf("%d\n", mx_count_words(str, 'f'));
    return 0;
}*/
