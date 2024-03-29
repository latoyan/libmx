#include "libmx.h"

t_list *mx_sort_list(t_list *list, bool (*cmp)(void *a, void *b)){
    if (!list || !cmp) return NULL;
    for (t_list *i = list; i->next != NULL; i = i->next){
        t_list *m = i;   	
            for (t_list *j = i->next; j != NULL; j = j->next){
            if (cmp(m->data, j->data))
                m = j;
            if (m != i){
                void *tmp = m->data;
                m->data = i->data;
                i->data = tmp;
            }
        }
    }
    return list;
}
