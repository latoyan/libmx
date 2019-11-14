#include "libmx.h"

char *mx_nbr_to_hex(unsigned long nbr){
	int k = 0;
	unsigned long t = nbr;
	char *s = mx_strnew(k);

	if (nbr == 0){
		s = "0";
		return s;
	}
	while (t > 0){
		t /= 16;
		k++;
	}
	for (int i = 0; i < k; i++){
		t = nbr % 16;
		s[i] = t < 10 ? t + '0' : t + 'a' - 10;
		nbr /= 16;
	}
	mx_str_reverse(s);
	return s;
}

/*int main(){
	mx_nbr_to_hex(1000);
	mx_nbr_to_hex(52);
	printf("%s\n", mx_nbr_to_hex(1000));
	printf("%s\n", mx_nbr_to_hex(52));
	return 0;
}*/
