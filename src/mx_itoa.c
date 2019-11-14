#include "libmx.h"

char *mx_itoa(int number){
    char *res = mx_strnew(11);
    int i = 0;
    if (number == 0){
        res[0] = '0';
        i++;
    }
    else if (number < 0){
        res[i] = '-';
        i++;
    }
    char *tmp = mx_strnew(10);
    int j = 0;
    while (number != 0){
        if (number > 0){
            tmp[j] = number % 10 + 48;
        }
        if (number < 0){
            tmp[j] = number % 10 * (-1) + 48;
        }
        number /= 10;
        j++;
    }
    while (j - 1 >= 0){
        j--;
        res[i] = tmp[j];
        i++;
    }
    free(tmp);
    res[i] = '\0';
    return res;
}

/*int main(){
    int num = 1234556;
    printf ("%s", mx_itoa(num));
    return 0;
}*/
