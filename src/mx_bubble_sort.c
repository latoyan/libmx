#include "libmx.h"

int mx_bubble_sort(char **arr, int size){
	int count = 0;
	for (int i = 0; i < size - 1; i++){
		for (int j = 0; j < size - 1 - i; j++){
			if (mx_strcmp(arr[j], arr[j + 1]) > 0){
				mx_word_swap(&arr[j], &arr[j + 1]);
				count++;
			}
		}
	}
	return count;
}

/*int main(){
	char *arr[] = {"abc", "xyz", "ghi", "def"};
	int a = mx_bubble_sort(arr, 4);
	printf("%d", a);
	return 0;
}*/
