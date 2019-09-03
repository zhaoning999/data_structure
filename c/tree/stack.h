#ifndef _STACK_H_
#define _STACK_H_
#include "tree.h"
#include <stdlib.h>
#include <stdio.h>
typedef struct stack
{
    bitnode* _node;
    struct stack *next;
}stack;

stack* init_stack();
void push(bitnode *t, stack *s);
bitnode* pop(stack* s);
int is_empty(stack* s);
void printf_is_empty(stack* s);
bitnode* top(stack* s);
#endif
#define FALSE 0
#define TRUE 1


