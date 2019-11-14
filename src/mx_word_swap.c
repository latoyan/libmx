#include "libmx.h"

void mx_word_swap(char **s1, char **s2){
	char *temp = *s2;
	*s2 = *s1;
	*s1 = temp;
}

/*int main(){
	char *str[] = {"ONE", "TWO", "THREE"};
	mx_swap_char(&str[0], &str[1]);
	printf("%s\n", str);
	mx_swap_char(&str[1], &str[2]);
	printf("%s\n", str);
	return 0;
}*/
