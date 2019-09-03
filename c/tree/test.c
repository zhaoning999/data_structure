#include "tree.h"
#include "util.h"

int main(){

    bitnode* now;
    bitnode* node;
    bitree tree = init_bitree(1);

    node = init_bitnode(2);
    tree->lchild = node;
    now = node;

    node = init_bitnode(8);
    now->lchild = node;

    node = init_bitnode(4);
    now->rchild = node;
    now = node;

    node = init_bitnode(6);
    now->lchild = node;

    node = init_bitnode(7);
    now->rchild = node;

    node = init_bitnode(3);
    tree->rchild = node;
    now = node;

    node = init_bitnode(9);
    now->lchild = node;

    node = init_bitnode(5);
    now->rchild = node;

    postorder(tree);

    postorder2(tree);

    

}