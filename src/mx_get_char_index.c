#include "libmx.h"

int mx_get_char_index(const char *str, char c){
	if (!str){
		return -2;
	}
	for (int i = 0; str[i] != '\0'; i++){
 		if (str[i] == c){
 			return i;
 		}
 	}
 	return -1;
}

/*int main(){
	char str[] = "loooo";
	char c = 'l';
	//mx_get_char_index(str, c);
	printf("%d\n", mx_get_char_index(str, c));
	return 0;
}*/
