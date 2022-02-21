#include <stdio.h>
#include <stdlib.h>

typedef char DATA;

typedef struct NODE{
    DATA d;
    struct NODE *left;
    struct NODE *right;
} NODE;

void inorder(NODE *tree){
    if(tree != NULL){
        
         inorder(tree->left);
           printf("%c\t",tree->d);
        
         inorder(tree->right);
       
    }
    // else{
    //     printf("nothing to show");
    // }
}

NODE* new_node(void){
    return(malloc(sizeof(NODE)));
}

NODE* init_node(DATA d1, NODE *p1, NODE *p2){
    NODE *t = new_node();
    t -> d = d1;
    t -> left = p1;
    t -> right = p2;
    return t;
}

NODE* create_tree(DATA d1[], int i, int size){
    if(i >= size)
    return NULL;

    else
    return(init_node(d1[i], 
    create_tree(d1,2*i+1,size), 
    create_tree(d1,2*i+2,size)));
}


int main(){
    // NODE *t1 = new_node();
    // printf("no error");
    NODE *t2 = NULL;
    NODE *t3 = NULL;
    printf("%d",(t2!=NULL));
    printf("\nno error 2\n");
    NODE *t1 =  init_node('a',t2, t3);
    // printf("%c",t1->d);
    inorder(t1);

    printf("\n\n\n\n");

    char a[5] = {'a','b','c','d','e'};

    NODE *t4 = create_tree(a,0,5);
    inorder(t4);
}