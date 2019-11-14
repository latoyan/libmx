#include "libmx.h"

bool mx_isspace(char c){
	bool i = false;
	if (c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\v' || c == '\f'){
		i = true;
	}
	return i;
}
