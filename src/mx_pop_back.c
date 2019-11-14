#include "libmx.h"

void mx_pop_back(t_list **list){	
	if (list == NULL) return;	
	
	if ((*list)->next == NULL){ // if first is NULL-node
		free(*list);
		*list = NULL;
		return;
	}
	else{
		t_list *p = *list; // remember beginning
		if (!p) return;
		while (p && p->next->next != NULL) // find last
			p = p->next;
		free(p->next);
		p->next = NULL;
	}
}
