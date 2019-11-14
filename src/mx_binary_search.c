#include "libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count){
    int min = 0;
    int max = size - 1;
    int mid = (max + min) / 2;
    while (min <= max){
        mid = (max + min) / 2;
        (*count)++;
    	if (mx_strcmp(arr[mid], s) == 0){
    		return mid;
        }
        else if (mx_strcmp(arr[mid], s) > 0){
        	max = mid - 1;
        }
        else{
        	min = mid + 1;
        }
    }
    (*count) = 0;
    return -1;
}

/*int main(){
    char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
    int count = 0;
    int a = mx_binary_search(arr, 6, "ab", &count);
    printf("%d, %d", a, count);
    return 0;
}*/
