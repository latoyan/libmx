#include "libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace){
    if (!str || !sub || !replace) return NULL;
    char *n = NULL;
    int len = 0;
    int i = mx_get_substr_index(&str[len], sub);
    if (i == -2) return (char *)str;
    while (i >= 0){
        char *tmp = mx_strndup(&str[len], i);
        n = mx_strjoin(n, tmp);
        free(tmp);
        n = mx_strjoin(n, replace);
        len = mx_strlen(n) - mx_strlen(replace) + mx_strlen(sub);
        i = mx_get_substr_index(&str[len], sub);
    }
    return n;
}

/*int main(){
    printf("%s\n", mx_replace_substr("McDonalds", "alds", "uts"));
    return 0;
}*/
