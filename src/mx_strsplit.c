#include "libmx.h"

char **mx_strsplit(const char *s, char c){
    if (!s || !*s || !c) return NULL;
    int k = mx_count_words(s, c);
    char **res = (char **) malloc((k + 1) * sizeof (char *));
    int i = 0;
    int j = 0;
    while (*s){
        if (*s == c){
			while (*s == c && *s != '\0')
				s++;
        }
        if (*s != c && *s != '\0'){
            char *p = (char *) s;
			while (*s != c && *s != '\0'){
				j++;
                s++;
            }
            res[i] = mx_strndup(p, j);
            i++;
            j = 0;
        }
    }
    res[i] = NULL;
    return res;
}

/*gcc mx_strsplit.c mx_count_words.c mx_strndup.c mx_strncpy.c mx_strnew.c mx_printchar.c*/

/*int main(){
    const char s[] = "**Good bye,**Mr.*Anderson.****";
    char **arr = mx_strsplit(s, '*');
    for(int i = 0; arr[i]; i++){
        printf("%s", arr[i]);
    }
    return 0;
}*/
