#include "libmx.h"

int partition(char *arr[], int low, int high, int *swap){
    char *tmp = 0;
    int i = low - 1;
    for (int j = low; j <= high - 1; j++){
        if (mx_strlen(arr[j]) < mx_strlen(arr[high])){
            i++;
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            if (i != j) (*swap)++;
        }
    }
    i += 1;
    tmp = arr[i];
    arr[i] = arr[high];
    arr[high] = tmp;
    if (i != high) (*swap)++;
    return i;
}

int mx_quicksort(char **arr, int left, int right){
    if (!arr) return -1;
    int swap = 0;
    if (left < right){
        int p = partition(arr, left, right, &swap);
        swap += mx_quicksort(arr, left, p - 1);
        swap += mx_quicksort(arr, p + 1, right);
    }    
    return swap;
}

/*int main(){
	char *arr[] = {"Michelangelo", "Donatello", "Leonardo", "Raphael"};
	printf("%d", mx_quicksort(arr, 0, 3));
	return 0;
}*/
