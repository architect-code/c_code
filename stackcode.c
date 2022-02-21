#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 1000
#define EMPTY -1
#define FULL MAX_LENGTH-1

typedef struct stack{
    char s[MAX_LENGTH];
    int top;
} stack;

void reset(stack *stk){
    stk->top = EMPTY;
}

void push(char p, stack *stk){
    stk->top++;
    stk->s[stk->top]=p;
}

char pop(stack *stk){
    return(stk->s[stk->top--]);
}

char top(const stack *stk){
    return(stk->s[stk->top]);
}

int main(){
    stack stack_of_char;
    char *str = "i am the god hand";
    char str_back[20];
    int i = 0;
    reset(&stack_of_char);
    // printf("resetting done");
    printf("original string %s\n",str);
    while(str[i]!='\0'){
        push(str[i], &stack_of_char);
        i++;
    }
    // printf("stuffing done");
    i=0;
    while(stack_of_char.top!=EMPTY && i<20){
        str_back[i] = pop(&stack_of_char);
        i++;
        // printf("%d",stack_of_char.top);
    }

    printf("reverse string %s\n",str_back);
}