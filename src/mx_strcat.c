#include "libmx.h"

char *mx_strcat(char *restrict s1, const char *restrict s2){
	int j;
	for (j = 0; s1[j] != '\0'; j++);
	for (int i = 0; s2[i] != '\0'; i++){
		s1[i + j] = s2[i];
	}
	return s1;
}

/*int main(){
	char text1[50] = "text1";
	char text2[] = "text2";
	printf("%s", mx_strcat(text1, text2));
	return 0;
}*/
