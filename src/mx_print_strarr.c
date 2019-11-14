#include "libmx.h"

void mx_print_strarr(char **arr, const char *delim){
	if(arr != NULL && delim != NULL){
		int count = 0;
		int i;
		for (i = 0; arr[i] != NULL; i++){
			count++;
		}
		for (; i > 0; i--){
			int j = 0;
			mx_printstr(arr[j]);
			j++;
			if (count - 1 > 0){
				mx_printstr(delim);
				count--;
			}
		}
	}
}

/*int main(){
	char delim[] = "_";
	char *arr[] = {"abfd", "abfd", "abfd", "abfd", "abfd", NULL};
	mx_print_strarr(arr, delim);
	return 0;
}*/
