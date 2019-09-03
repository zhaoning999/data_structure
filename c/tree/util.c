#include "tree.h"
#include "util.h"
#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

bitree init_bitree(Element e){

    bitree t = (bitree)malloc(sizeof(bitree));
    if(t){
        t->data = e;
        t->lchild = NULL;
        t->rchild = NULL;
        return t;
    }
    exit(2);

}

bitnode* init_bitnode(Element e){
    bitnode* _node = (bitnode*)malloc(sizeof(bitnode));
    if(_node){
        _node->data = e;
        _node->lchild = NULL;
        _node->rchild = NULL;
        return _node;
    }

    exit(2);
}

void postorder(bitree t){
    if(t){
        postorder(t->lchild);
        postorder(t->rchild);
        visit(t);
    }
}

void visit(bitree t){

    printf("this is the %d tree\n", t->data);
    
}


// 非递归后序遍历
void postorder2(bitree t){

    stack* s = init_stack();
    bitnode* p, *pre;
    p = t;
    pre = p;
    push(t, s);
    while (!is_empty(s))
    {
        p = top(s);
        if((p->lchild != NULL)&&(p->lchild != pre)&&(p->rchild != pre)){
            push(p->lchild, s);
        }
        else
        {
            if((p->rchild != NULL)&&(p->rchild != pre)){
                push(p->rchild, s);
            }
            else
            {
                visit(p);
                pre = p;
                pop(s);    
            }    
        }
        
    }
    
}

// void postorder2(bitree t){
//     stack* s = init_stack();
//     bitnode* p, *pre;
//     p = t;
//     pre = p;

//     // do{

//     //     if((p->lchild != NULL) && (p->lchild != pre)){
//     //         push(p, s);
//     //         printf("push left\n");
//     //         p = p->lchild;
//     //         continue;
//     //     }
//     //     else
//     //     {
//     //         if((p->rchild != NULL) && (p->rchild != pre)){
//     //             push(p, s);
//     //             printf("push right\n");
//     //             p = p->rchild;
//     //             continue;
//     //         }
//     //         else
//     //         {
//     //             visit(p);
//     //             pre=p;
//     //             p=pop(s);
//     //             if((p->rchild == pre)){
//     //                 pop()
//     //                 p = p->rchild;
//     //             }
//     //         }
            
//     //     }
        
//     // }while (!is_empty(s));
    
// }