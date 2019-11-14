#include "libmx.h"

void mx_printlist(t_list *head){
    t_list *current = head;

    while (current != NULL) {
        mx_printstr(current->data);
        mx_printstr(" ");
        current = current->next;
    }
}
