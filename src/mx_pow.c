#include "libmx.h"

double mx_pow(double n, unsigned int pow){
	if (pow == 0){
		return 1;
	}
	double core = n;
	while (pow != 1){
		n *= core;
		pow--;
	}
	return n;
}
