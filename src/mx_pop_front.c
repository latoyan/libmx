#include "libmx.h"

void mx_pop_front(t_list **list){	
	if (list == NULL) return;	
	
	if ((*list)->next == NULL){ // if first is NULL-node
		free(*list);
		*list = NULL;
		return;
	}
	else{
		t_list *p = (*list)->next; // remember second node
		free(*list); 
		*list = p;
	}
}
