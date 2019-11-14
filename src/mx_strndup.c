#include "libmx.h"

char *mx_strndup(const char *s1, size_t n){
    char *dst = mx_strnew(n);
    mx_strncpy(dst, s1, n);
    return dst;
}

/*int main(){
	printf("%s\n", "\x1b[36mTEST FOR mx_strndup\033[0m");
	if((mx_strcmp(mx_strndup("122", 2), "123") < 0)) {
		printf("%s\n", "\x1b[32mOK FOR INPUTS: 123, 4\033[0m");
	}
	else {
		printf("%s\n", "\x1b[31mFILED FOR INPUTS: 123, 4\033[0m");
	}
	printf("%c", '\n');
	return 0;
}*/
