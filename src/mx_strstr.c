#include "libmx.h"

char *mx_strstr(const char *haystack, const char *needle){
	char *s = (char *) haystack;
	int length = mx_strlen(needle);
	while (*s){
		for (int i = 0; i < length && s[i] == needle[i]; i++){
			if (needle[i + 1] == '\0'){
				return s;
			}
		}
		s++;
	}
	return 0;
}

/*int main(){
	const char haystack[20] = "TutorialsPoint";
	const char needle[10] = "Point";

	printf("The substring is: %s\n", mx_strstr(haystack, needle));
	return(0);
}*/
