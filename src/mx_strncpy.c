#include "libmx.h"

char *mx_strncpy(char *dst, const char *src, int len){
	int i = 0;
	while (src[i] && i < len){
		dst[i] = src[i];
		i++;
	}
	while (i < len){
		dst[i] = '\0';
		i++;
	}
	return dst;
}

/*int main(){
	char *dst = "qwerrefer";
	mx_strlen(dst);
	const char *src = "asdf";
	printf("%d", mx_strcmp(mx_strndup("122", 2), "123"));
	printf("%s", mx_strncpy(dst, src, 5));
	return 0;
}*/
