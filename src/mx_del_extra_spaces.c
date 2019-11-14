#include "libmx.h"

char *mx_del_extra_spaces(const char *str){
	if (!str || !*str) return NULL;

	char *num = mx_strtrim(str);
	if (num == NULL) return NULL;

	int kwl = 0;
	int word = mx_count_words_isspace(str, &kwl);

	char *text = mx_strnew(kwl + word - 2);
	if (text == NULL) return NULL;

	int i = 0;
	int j = 0;
	while (num[i]){
		while (!mx_isspace(num[i]) && num[i]){
			text[j] = num[i];
			i++;
			j++;
		}
		if (num[i]){
			text[j] = ' ';
			j++;
		}	
		while (mx_isspace(num[i]) && num[i]){
			i++;
		}
	}	
	free(num);
	return text;
}

/*int main(){
	char name[] = "\f My name...   is Neo \t\n ";
	printf ("%s", mx_del_extra_spaces(name));
	return 0;
}*/
