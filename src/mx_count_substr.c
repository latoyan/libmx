#include "libmx.h"

int mx_count_substr(const char *str, const char *sub){
	if (!str || !sub) return -1;
	char *s = (char*) str;
	int count = 0;
	int size = mx_strlen(sub);
	while (*s){
		for (int i = 0; i < size && s[i] == sub[i]; i++){
			if (sub[i + 1] == '\0'){
				count++;
			}
		}
		s++;
	}
	return count;
}

/*int main(){
	printf("%d", mx_count_substr("yo, yo, yo yo Neo yo yo{", "yo"));
	return 0;
}*/
