#include "libmx.h"

void mx_printint(int n){
	char str[10];
	int sumDigit = 0;
	int MAX_INT = 2147483647;
	int MIN_INT = -2147483648;
	if (n == 0){
        mx_printchar('0');
	}
	else if (n == MIN_INT){
		mx_printstr("-2147483648");
	}
	else if (n <= MAX_INT){
		if (n < 0){
			mx_printchar('-');
			n *= -1;
		}
		while (n != 0){
			int digit = n % 10;
			str[sumDigit] = digit;
			n /= 10;
			digit = n % 10;
			sumDigit++;
		}
		for (; sumDigit > 0; sumDigit--){
			mx_printchar(str[sumDigit - 1] + '0');
		}
	}
}

/*int main(){
	mx_printint(-2147483648);
	return 0;
}*/
