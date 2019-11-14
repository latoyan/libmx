#include "libmx.h"

unsigned long mx_hex_to_nbr(const char *hex){
	unsigned long n = 0;
	unsigned long t = 1;
	unsigned long m = 1;
	int k = 0;
	if (!hex || *hex == 0){
		return n;
	}
	const char *temp = hex;
	while (*temp != '\0'){
		k++;
		temp++;
		m *= 16;
	}
	for (int i = 0; i < k; i++){
		if (hex[i] >= '0' && hex[i] <= '9'){
			t = hex[i] - '0';
		}
		else if (hex[i] >= 'a' && hex[i] <= 'f'){
			t = hex[i] - 'a' + 10;
		}
		else if (hex[i] >= 'A' && hex[i] <= 'F'){
			t = hex[i] - 'A' + 10;
		}
		else{
			return 0;
		}
		m /= 16;
		n += t * m;
	}
	return n;
}

/*int main(){
	printf("%lu\n", mx_hex_to_nbr("C4"));
	printf("%lu\n", mx_hex_to_nbr("FADE"));
	printf("%lu\n", mx_hex_to_nbr("ffffffffffff"));
	printf("%lu\n", mx_hex_to_nbr(NULL));
	return 0;
}*/
