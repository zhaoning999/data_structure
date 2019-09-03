#ifndef _TREE_H_

#define _TREE_H_
#define Element int
typedef struct bitnode
{
    /* data */
    Element data;
    struct bitnode* lchild, *rchild;
}bitnode, *bitree;

#endif


