#include "libmx.h"

char *mx_strtrim(const char *str){
	if (!str) return NULL;
	int i = 0;
	int j = mx_strlen(str) - 1;
	while (mx_isspace(str[i]))
		i++;
	while (mx_isspace(str[j]))
		j--;
	if (i <= j){
		char *n;
		n = mx_strncpy(mx_strnew(j + 1 - i), &str[i], j + 1 - i);
		return n;
	}else{
		return malloc(0);
	}
}

/*int main(){
	char str[] = "\f My name... is Neo \t\n ";
	printf ("%s", mx_strtrim(str));
	return 0;
}*/
