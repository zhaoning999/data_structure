#include "stack.h"
#include "tree.h"
#include "util.h"
#include <stdio.h>

stack* init_stack(){
    stack* s = (stack*)malloc(sizeof(stack));
    if(s){
        s->_node = NULL;
        s->next = NULL;
        return s;
    }
}
void push(bitnode *t, stack *s){
    stack* temp = s->next;
    stack* _s = (stack*)malloc(sizeof(stack));
    _s->_node = t;
    _s->next = temp;
    s->next = _s;
    #ifdef DEBUG
    printf("stack push tree %d\n", _s->_node->data);
    #endif
}
bitnode* pop(stack* s){
    stack* temp = s->next;
    s->next = temp->next;
    bitnode* t = temp->_node;
    free(temp);
    #ifdef DEBUG
    printf("stack pop tree %d\n", t->data);
    #endif
    return t;
};


int is_empty(stack* s){
    return (s->next == NULL) ? TRUE : FALSE; 
};

void printf_is_empty(stack* s){
    if(is_empty(s)) {
        printf("stack is empty\n");
        return;
    }
    printf("stack is not empty\n");
}

bitnode* top(stack* s){
    if(s->next) return s->next->_node;
    return NULL;
}


// test stack;
// int main(){

//     stack* s = init_stack();
//     printf_is_empty(s);

//     push(init_bitnode(1), s);
//     push(init_bitnode(2), s);
//     push(init_bitnode(3), s);

//     printf_is_empty(s);

//     bitnode* t = pop(s);
//     printf("pop node is %d\n", t->data);
//     pop(s);
//     pop(s);
//     printf_is_empty(s);

// }