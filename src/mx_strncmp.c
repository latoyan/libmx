#include "libmx.h"

int mx_strncmp(const char *s1, const char *s2, int size){
	int i;
	for (i = 0; s1[i] != '\0' && i < size - 1; i++){
		if(s1[i] != s2[i]){
			return s1[i] - s2[i];
		}
	}
	return s1[i] - s2[i];
}
