#include "libmx.h"

t_list *mx_create_node(void *data){
    if (!data) return NULL;
    t_list *temp = malloc(sizeof(t_list));
    if (!temp) return NULL;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

/*int main(){
	char *tata = "43";
    t_list *tmp = mx_create_node(tata);
    mx_printlist(tmp);
    printf("\n");

    t_list *head = mx_create_node("create_node test: qqwedger");
    t_list *s1 = mx_create_node("ftgqgg");
    t_list *s2 = mx_create_node("pqwkso");
    t_list *s3 = mx_create_node("hjfgqegqg");
    t_list *s4 = mx_create_node("opqpokop");
    head->next = s1;
    s1->next = s2;
    s2->next = s4;
    s4->next = s3;
    mx_printlist(head);
    printf("\n");
    mx_push_front(&head, "push_front test: oooooo");
    mx_printlist(head);
    printf("\n");
    mx_push_back(&head, ":test push_back");
    mx_printlist(head);
    printf("\n");
    mx_pop_front(&head);
    mx_printlist(head);
    printf("\n");
    mx_pop_back(&head);
    mx_printlist(head);
    printf("\n");
    printf("%d", mx_list_size(head));
    printf("\n");
    mx_printlist(head);
    printf("\n");
    return 0;
}*/
