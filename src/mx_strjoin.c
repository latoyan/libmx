#include "libmx.h"

char *mx_strjoin(char const *s1, char const *s2){
	char *p = NULL;
	if (!s1 && !s2) return NULL;
	else if (!s1) p = mx_strdup(s2);
	else if (!s2) p = mx_strdup(s1);
	else{
		p = mx_strnew(mx_strlen(s1) + mx_strlen(s2)); 
		if (!p) return NULL;   
		p = mx_strcpy(p, s1);
		p = mx_strcat(p, s2);
	}
	return p;
}

/*int main(){
	char *str1 = NULL;
	char str2[] = "front ";
	char str3[] = "back";
	printf("%s\n", mx_strjoin(str2, str1));
	printf("%s\n", mx_strjoin(str2, str3));
	printf("%s\n", mx_strjoin(str2, str1));
	printf("%s\n", mx_strjoin(str1, str1));
	return 0;
}*/
