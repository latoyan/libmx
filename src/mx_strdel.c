#include "libmx.h"

void mx_strdel(char **str){
	*str = NULL;
	free(*str);
}
