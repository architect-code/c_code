#include <stdio.h>
#include <stdlib.h>

typedef struct list{
    int d;
    struct list *next;
} list;

list* create_list(int i){
    list *h = malloc(sizeof(list));
    h -> d = i;
    h->next = NULL;
    return h;
}

list* add_to_list_before(list *h, int i){
list *head = create_list(i);
head -> next = h;
return head;
}

list* add_to_list_after(list *h, int i){
h -> next = create_list(i);
return h;
}

void print_list(list *h){
    while(h!=NULL){
        printf("%d \t",(h -> d));
        h = h->next;
    }
}

int main(){
    list *h = NULL;
    h = malloc(sizeof(list));
    h = create_list(244);
    h = add_to_list_after(h,22);
    h= add_to_list_before(h,33);
    print_list(h);
    // h -> d=5;
    // h -> next = malloc(sizeof(list));
    // h -> next -> d=10;
    // h -> next -> next =NULL;
    // print_list(h);
}