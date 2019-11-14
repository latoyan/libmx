#include "libmx.h"

char *mx_strdup(const char *s1){
	char *dst;
	int len = mx_strlen(s1);
	dst = mx_strnew(len);
	mx_strcpy(dst, s1);
	return dst;
}
