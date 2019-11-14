#include "libmx.h"

void mx_print_unicode(wchar_t c){
    char str[5];
    if (c <= 0x7F){ // ascii
        str[0] = (char) c;
        str[1] = 0;
    }
    else if (c <= 0x07FF){ // 2-byte unicode
        str[0] = (char) (((c >> 6)  & 0x1F) | 0xC0);
        str[1] = (char) (((c >> 0)  & 0x3F) | 0x80);
        str[2] = 0;
    }
    else if (c <= 0xFFFF){ // 3-byte unicode
        str[0] = (char) (((c >> 12) & 0x0F) | 0xE0);
        str[1] = (char) (((c >> 6)  & 0x3F) | 0x80);
        str[2] = (char) (((c >> 0)  & 0x3F) | 0x80);
        str[3] = 0;
    }
    else if (c < 0x10FFFF){
        str[0] = (char) (((c >> 18) & 0x07) | 0xF0);
        str[1] = (char) (((c >> 12) & 0x3F) | 0x80);
        str[2] = (char) (((c >> 6)  & 0x3F) | 0x80);
        str[3] = (char) (((c >> 0)  & 0x3F) | 0x80);
        str[4] = 0;
    }
    else{ // error - use replacement character
        str[0] = (char) 0xEF;
        str[1] = (char) 0xBF;
        str[2] = (char) 0xBD;
        str[3] = 0;
    }
    write(1, str, mx_strlen(str));
}

/*int main(){
    mx_print_unicode(129333);
    mx_printchar('\n');
    mx_print_unicode(129334);
    mx_printchar('\n');
    mx_print_unicode(129335);
    mx_printchar('\n');
    mx_print_unicode(129336);
    mx_printchar('\n');
    mx_print_unicode(129337);
    mx_printchar('\n');
    mx_print_unicode(129338);
    mx_printchar('\n');
    mx_print_unicode(129339);
    mx_printchar('\n');
    return 0;
}*/
